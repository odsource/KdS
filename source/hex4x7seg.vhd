
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY hex4x7seg IS
   GENERIC(RSTDEF:  std_logic := '0');
   PORT(rst:   IN  std_logic;                       -- reset,           active RSTDEF
        clk:   IN  std_logic;                       -- clock,           rising edge
        en:    IN  std_logic;                       -- enable,          active high
        swrst: IN  std_logic;                       -- software reset,  active RSTDEF
        data:  IN  std_logic_vector(15 DOWNTO 0);   -- data input,      positiv logic
        dpin:  IN  std_logic_vector( 3 DOWNTO 0);   -- 4 decimal point, active high
        an:    OUT std_logic_vector( 3 DOWNTO 0);   -- 4 digit enable (anode control) signals,      active low
        dp:    OUT std_logic;                       -- 1 decimal point output,                      active low
        seg:   OUT std_logic_vector( 7 DOWNTO 1));  -- 7 FPGA connections to seven-segment display, active low
END hex4x7seg;

ARCHITECTURE struktur OF hex4x7seg IS
	signal counter: integer range 0 to 2**14-1;
	signal cnt: std_logic_vector(1 to 2);
	signal counter_flag: std_logic;
	signal sw_sel: std_logic_vector(0 to 3);
	signal sig1: std_logic;
  -- hier sind benutzerdefinierte Konstanten und Signale einzutragen

BEGIN

   -- Modulo-2**14-Zaehler als Prozess
	process (rst, clk) is
	begin
		if rst=RSTDEF then
			counter <= 0;
			counter_flag <= '0';
		elsif rising_edge(clk) then	
			if en = '1' then
				counter <= (counter+1)mod 2**14;
				counter_flag <= '0';
				if counter = 0 then
					counter_flag <= '1';	
				end if;
			end if;
			if swrst=RSTDEF then
				counter <= 0;
				counter_flag <= '0';
			end if;
		end if;
	end process;
   
   -- Modulo-4-Zaehler als Prozess
	process (rst, swrst, clk) is
	begin
		if rst=RSTDEF then
			cnt <= "00";
		elsif rising_edge(clk) then
			cnt<= cnt + counter_flag;	
			if swrst=RSTDEF then
				cnt <= "00";
			end if;
		end if;
	end process;

   -- 1-aus-4-Dekoder als selektierte Signalzuweisung
	process (rst, swrst, cnt) is
	begin
		if rst=RSTDEF then
			an <= "1111";
		else
			case cnt is
				when "00" => an <= "1110";
				when "01" => an <= "1101";
				when "10" => an <= "1011";
				when others => an <= "0111";
			end case;
			if swrst=RSTDEF then
				an <= "1111";
			end if;
		end if;
	end process;

   -- 1-aus-4-4-Bit-Multiplexer als selektierte Signalzuweisung
	with cnt select
		sw_sel <= 	data(3 downto 0) when "00",
						data(7 downto 4) when "01",
						data(11 downto 8) when "10",
						data(15 downto 12) when others;
   
   -- 7-aus-4-Dekoder als selektierte Signalzuweisung
   with sw_sel select
		seg <= "0000001"	when "0000",
				 "1001111"	when "0001",
				 "0010010"	when "0010",
				 "0000110"	when "0011",
				 "1001100"	when "0100",
				 "0100100"	when "0101",
				 "0100000"	when "0110",
				 "0001111"	when "0111",
				 "0000000"	when "1000",
				 "0000100"	when "1001",
				 "0001000"	when "1010",
				 "1100000"	when "1011",
				 "0110001"	when "1100",
				 "1000010"	when "1101",
				 "0110000"	when "1110",
				 "0111000"	when others;
   
   -- 1-aus-4-Multiplexer als selektierte Signalzuweisung
	with cnt select
		sig1 <= dpin(0) when "00",
				  dpin(1) when "01",
				  dpin(2) when "10",
				  dpin(3) when others;
	dp <= not sig1;
END struktur;