
LIBRARY ieee, unisim;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
USE ieee.std_logic_arith.ALL;
USE unisim.VComponents.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY core IS
   GENERIC(RSTDEF: std_logic := '0');
   PORT(rst:   IN  std_logic;                      -- reset,          RSTDEF active
        clk:   IN  std_logic;                      -- clock,          rising edge
        swrst: IN  std_logic;                      -- software reset, RSTDEF active
        -- handshake signals
        strt:  IN  std_logic;                      -- start,          high active
        rdy:   OUT std_logic;                      -- ready,          high active
        -- address/data signals
        sw:    IN  std_logic_vector( 7 DOWNTO 0);  -- address input
        dout:  OUT std_logic_vector(15 DOWNTO 0)); -- result output
END core;

-- Erweiterung um die Architekturbeschreibung
ARCHITECTURE structure OF core IS

	COMPONENT ram_block IS
	PORT (addra: IN std_logic_VECTOR(9 DOWNTO 0);
         addrb: IN  std_logic_VECTOR(9 DOWNTO 0);
         clka:  IN  std_logic;
         clkb:  IN  std_logic;
         dina:  IN  std_logic_VECTOR(15 downto 0);
         douta: OUT std_logic_VECTOR(15 DOWNTO 0);
         doutb: OUT std_logic_VECTOR(15 DOWNTO 0);
         ena:   IN  std_logic;
         enb:   IN  std_logic;
         wea:   IN  std_logic);
	END COMPONENT;
	
	COMPONENT rom_block IS
    PORT (addra: IN  std_logic_VECTOR(9 DOWNTO 0);
         addrb:  IN  std_logic_VECTOR(9 DOWNTO 0);
         clka:   IN  std_logic;
         clkb:   IN  std_logic;
         douta:  OUT std_logic_VECTOR(15 DOWNTO 0);
         doutb:  OUT std_logic_VECTOR(15 DOWNTO 0);
         ena:    IN  std_logic;
         enb:    IN  std_logic);
	END COMPONENT;

	type TState IS (IDLE, RM, RMA, MA, A, A2);
	SIGNAL state: TState := IDLE;
	
	SIGNAL douta: 	 std_logic_VECTOR(15 DOWNTO 0);
	SIGNAL doutb: 	 std_logic_VECTOR(15 DOWNTO 0);
	SIGNAL addra: 	 std_logic_VECTOR(9 DOWNTO 0);
    SIGNAL addrb: 	 std_logic_VECTOR(9 DOWNTO 0);
	SIGNAL extdouta: std_logic_VECTOR(17 DOWNTO 0);
	SIGNAL extdoutb: std_logic_VECTOR(17 DOWNTO 0);
	
	SIGNAL douta_ram: std_logic_VECTOR(15 DOWNTO 0);
	SIGNAL doutb_ram: std_logic_VECTOR(15 DOWNTO 0);
	SIGNAL addra_ram: std_logic_VECTOR(9 DOWNTO 0);
    SIGNAL addrb_ram: std_logic_VECTOR(9 DOWNTO 0);
	SIGNAL wea: 	  std_logic;
	
    SIGNAL enr:   	std_logic;
	SIGNAL enram:	std_logic;
	SIGNAL enadd: 	std_logic;	
	SIGNAL res: 	std_logic_VECTOR(15 DOWNTO 0);
	
	SIGNAL multres: std_logic_vector(35 DOWNTO 0);
	SIGNAL result: 	std_logic_vector(43 DOWNTO 0);
	
	SIGNAL cnt_ab: std_logic_vector(3 DOWNTO 0);
	SIGNAL cnt_b: std_logic_vector(3 DOWNTO 0);
	SIGNAL cnt_a: std_logic_vector(3 DOWNTO 0);
	SIGNAL cnt_ram: std_logic_vector(7 DOWNTO 0);
BEGIN

	rob: rom_block
	PORT MAP(
		douta 	=> douta,
        doutb	=> doutb,
        addra	=> addra,
        addrb	=> addrb,
        clka	=> clk,
        clkb	=> clk,
        ena		=> enr,
        enb		=> enr
	);
	addrb_ram <= "00" & sw;
	dout <= doutb_ram;
	rab: ram_block
	PORT MAP(
        dina	=> res,
        wea		=> wea,
		douta 	=> douta_ram,
        doutb	=> doutb_ram,
        addra	=> addra_ram,
        addrb	=> addrb_ram,
        clka	=> clk,
        clkb	=> clk,
        ena		=> enram,
        enb		=> '1'
	);
	
	extdouta <= SXT(douta,18);
	extdoutb <= SXT(doutb,18);
	mult: MULT18X18
	PORT MAP(
		A		=> extdouta,
		B		=> extdoutb,
		--C		=> clk,
		--CE	=> ce,
		--R		=> rst,
		P		=> multres
	);
	
	
	
	
	steuerwerk: PROCESS(rst, clk)
	BEGIN
		if rst = RSTDEF then
			state <= IDLE;
			enr <= '0';
			rdy <= '0';
			enadd <= '0';
			wea <= '0';
			enram <= '0';
			res <= (others => '0');
		elsif rising_edge(clk) then
				case state is
					when IDLE =>
						enr <= '0';
						enadd <= '0';
						wea <= '0';
						enram <= '0';
						cnt_ab <= (others => '0');
						cnt_a <= (others => '0');
						cnt_b <= (others => '0');
						cnt_ram <= (others => '0');
						if strt = '1' then
							res <= (others => '0');
							addra <= (others => '0');
							addra_ram <= (others => '0');
							addrb <= "0100000000";
							cnt_ab <= cnt_ab + '1';
							enr <= '1';
							state <= RM;
						end if;
					when RM =>
						addra(3 DOWNTO 0) <= cnt_ab;
						addrb(7 DOWNTO 4) <= cnt_ab;
						cnt_ab <= cnt_ab + '1';
						enadd <= '1';
						state <= RMA;
					when RMA =>
						addra(7 DOWNTO 0) <= cnt_a & cnt_ab;
						addrb(7 DOWNTO 0) <= cnt_ab & cnt_b;
						
						cnt_ab <= cnt_ab + '1';
						
						wea <= '0';
						enram <= '0';
						if cnt_ab = "1111" then
							cnt_b <= cnt_b + '1';
							if cnt_b = "1111" then
								cnt_a <= cnt_a + '1';
								if cnt_a = "1111" then
									state <= MA;
									
									
								end if;
							end if;
						elsif cnt_ab = "0010" then
							wea <= '1';
							enram <= '1';
							addra_ram(7 DOWNTO 0) <= cnt_ram - '1';
							res <= result(15 DOWNTO 0);
							cnt_ram <= cnt_ram + '1';
						end if;
					when MA =>
						state <= A;
						enr <= '0';
						
					when A =>	
						state <= A2;
						enadd <= '0';
					when A2 =>
						
						state <= IDLE;	
						wea <= '1';
						enram <= '1';
						addra_ram(7 DOWNTO 0) <= cnt_ram - '1';						
						rdy <= '1';
						res <= result(15 DOWNTO 0);	
							
				end case;
				if swrst = RSTDEF then
					state <= IDLE;
					enr <= '0';
					rdy <= '0';
					wea <= '0';
					enram <= '0';
					enadd <= '0';
					res <= (others => '0');
				end if;
		end if;
	END PROCESS;
	
	
	addierer_akk: PROCESS(rst, clk)
	BEGIN
		if rst = RSTDEF then
			result <= (others => '0');
		elsif rising_edge(clk) then			
			if enadd = '1' then
				if cnt_ab = "0010" then
					result <= SXT(multres, 44);
				else
					result <= result + SXT(multres, 44);
				end if;
			else
				--result <= (others => '0');
			end if;
			if swrst = RSTDEF then
				result <= (others => '0');
			end if;
		end if;
	END PROCESS;
END structure;