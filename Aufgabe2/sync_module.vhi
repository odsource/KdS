
-- VHDL Instantiation Created from source file sync_module.vhd -- 14:57:19 04/26/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT sync_module
	PORT(
		rst : IN std_logic;
		clk : IN std_logic;
		swrst : IN std_logic;
		BTN0 : IN std_logic;
		BTN1 : IN std_logic;
		BTN2 : IN std_logic;          
		load : OUT std_logic;
		dec : OUT std_logic;
		inc : OUT std_logic
		);
	END COMPONENT;

	Inst_sync_module: sync_module PORT MAP(
		rst => ,
		clk => ,
		swrst => ,
		BTN0 => ,
		BTN1 => ,
		BTN2 => ,
		load => ,
		dec => ,
		inc => 
	);


