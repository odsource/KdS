
-- VHDL Instantiation Created from source file std_counter.vhd -- 14:41:42 04/26/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT std_counter
	PORT(
		rst : IN std_logic;
		clk : IN std_logic;
		en : IN std_logic;
		inc : IN std_logic;
		dec : IN std_logic;
		load : IN std_logic;
		swrst : IN std_logic;
		din : IN std_logic_vector(3 downto 0);          
		cout : OUT std_logic;
		dout : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_std_counter: std_counter PORT MAP(
		rst => ,
		clk => ,
		en => ,
		inc => ,
		dec => ,
		load => ,
		swrst => ,
		cout => ,
		din => ,
		dout => 
	);


