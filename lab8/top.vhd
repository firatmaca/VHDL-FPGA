----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:24:43 12/17/2018 
-- Design Name: 
-- Module Name:    top - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
port (   item_select : in  std_logic_vector(1 downto 0);
			request : in  std_logic;
			one_tl : in  std_logic;
			take_item : in  std_logic;
			rst,clk,enable : in  std_logic;
			seg_out,seg_sel : out std_logic_vector(7 downto 0);
			ready : out std_logic
);
end top;

architecture Behavioral of top is
--component converter is
--    Port (
--        clk_in : in  STD_LOGIC;
--        enable  : in  STD_LOGIC;
--		  rst  : in  STD_LOGIC;
--        clk_out: out STD_LOGIC
--    );
--end component;
component seven_four is
    Port ( in1 : in  STD_LOGIC_VECTOR (3 downto 0);
           in2 : in  STD_LOGIC_VECTOR (3 downto 0);
           in3 : in  STD_LOGIC_VECTOR (3 downto 0);
           in4 : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
			  dp  : out  STD_LOGIC;
           sel : out  STD_LOGIC_VECTOR (3 downto 0);
           segment : out  STD_LOGIC_VECTOR (6 downto 0)
			);
end component;
type state_type is (s0,s1,s2,s3);
signal state_reg,state_next : state_type ;
signal money : unsigned(3 downto 0);
signal totalmoney : unsigned (3 downto 0);
signal clk1,dp,led : std_logic;
signal state,statenow, tmoney : std_logic_vector (3 downto 0);
signal seg_sel_4 : std_logic_vector (3 downto 0);
signal seg_out_7 : std_logic_vector (6 downto 0);

signal counter : integer range 0 to 100001 := 0;
begin
--A1: converter port map (clk,enable,rst,clk1);
A2: seven_four port map (tmoney,statenow,"0000","0000",clk,dp,seg_sel_4,seg_out_7);
seg_out <= (seg_out_7 & dp);
seg_sel <= "1111" & seg_sel_4;

--state register
process (clk,rst )
begin 
    if (rst = '1') then
		state_reg <= s0;
		elsif(clk'event and clk = '1') then
		state_reg <= state_next;
		totalmoney <= money;
		ready <= led;
		statenow <=state;
		tmoney <= std_logic_vector (totalmoney);
end if;
end process;
-- next state logic
process(clk,state_reg,take_item,item_select,request,one_tl)
begin 
	money <= "0000"; --default value
	led <= '0';
	case state_reg is
		when s0 =>
			if(request = '1')then
				state_next <= s1;
				else
				state_next <= s0;
				end if ;
				state <= "0000";
		when s1 =>
			if (one_tl = '1')then
				money <= totalmoney + 1;
				state_next <= s2;
				else
				state_next <= s1;
				end if;
				state <= "0001";
		when s2 =>
			if (item_select = "00" and totalmoney = "0001") then
				led <= '1';
				state_next <= s3;
			else 
				if rising_edge(clk) then
					if (counter = 10000) then
						counter <= 0;
					else
                counter <= counter + 1;
            end if;
        end if;
				state_next <= s1;
			end if;
			if (item_select = "01" and totalmoney = "0010") then
				led <= '1';
				state_next <= s3;
			else 
				if rising_edge(clk) then
					if (counter = 100000) then
						counter <= 0;
					else
                counter <= counter + 1;
            end if;
        end if;
				
				state_next <= s1;
			end if;
			if (item_select = "10" and totalmoney = "0011") then
				led <= '1';
				state_next <= s3;
			else 
				if rising_edge(clk) then
					if (counter = 100000) then
						counter <= 0;
					else
                counter <= counter + 1;
            end if;
        end if;
				state_next <= s1;
			end if;
			if (item_select = "11" and totalmoney = "0100") then
				led <= '1';
				state_next <= s3;
			else 
				if rising_edge(clk) then
					if (counter = 100000) then
						counter <= 0;
					else
                counter <= counter + 1;
            end if;
        end if;
				state_next <= s1;
			end if;
			state <= "0010";
		when s3 =>
			if (take_item = '1')then
				led <= '0';
				money <= "0000";
				state_next <= s0;
			else
				led <= '1';
				money <= money;
				state_next <= s3;
			end if;
			state <= "0011";
		end case;
		
		
end process;
				
end Behavioral;

