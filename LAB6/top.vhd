----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:26:02 11/06/2018 
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
use IEEE.numeric_std.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
    Port ( clk100Mhz : in  STD_LOGIC;
			  reset : in  STD_LOGIC;
           up_down : in  STD_LOGIC;
           enable : in  STD_LOGIC;
			  seg_out : out STD_LOGIC_VECTOR(7 downto 0);
			  seg_sel : out STD_LOGIC_VECTOR(7 downto 0)		  
			   
			   );
end top;

architecture Behavioral of top is
component seven_four 
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
component converter 
    Port (
        clk_in : in  STD_LOGIC;
        enable  : in  STD_LOGIC;
		  rst   : in  STD_LOGIC;
        clk_out: out STD_LOGIC
    );
end component;
	
signal reg:unsigned(7 downto 0):="00000001";
signal clk1,dp: STD_LOGIC;
signal b0,b1,b2,b3 : STD_LOGIC_VECTOR(3 downto 0);

signal seg_out_7 :STD_LOGIC_VECTOR(6 downto 0);
signal seg_sel_4 : STD_LOGIC_VECTOR(3 downto 0);

--signal ac_l: STD_LOGIC_VECTOR(3 downto 0);
begin
A1:converter port map(clk100Mhz,enable,reset,clk1);
A6 :seven_four port map (b0, b1, b2, b3, clk100Mhz, dp,seg_sel_4,seg_out_7);
process(clk1,reg)

begin

if(reg="00000001") then
b0<="0000";
end if;
if(reg="00000010") then
b1<="0000";
b0<="1111";
end if;
if(reg="00000100")then
b2<="0000";
b1<="1111";
end if;
if(reg="00001000")then
b3<="0000";
b2<="1111";
end if;
if(reg="00010000")then
b3<="0001";
end if;
if(reg="00100000")then
b2<="0001";
b3<="1111";
end if;
if(reg="01000000")then
b1<="0001";
b2<="1111";
end if;
if(reg="10000000")then
b0<="0001";
b1<="1111";
end if;



end process;
process(clk1,up_down,reset,reg)
begin
if(enable='1' and up_down ='1') then
if(reg="00000001") then
reg <= reg ror 1;
end if;
if(reg="00000010") then
reg <= reg ror 1;
end if;
if(reg="00000100")then
reg <= reg ror 1;
end if;
if(reg="00001000")then
reg <= reg ror 1;
end if;
if(reg="00010000")then
reg <= reg ror 1;
end if;
if(reg="00100000")then
reg <= reg ror 1;
end if;
if(reg="01000000")then
reg <= reg ror 1;
end if;
if(reg="10000000")then
reg <= reg ror 1;
end if;
end if;
if(enable='1' and up_down = '0') then

if(reg="00000001") then
reg <= reg rol 1;
end if;
if(reg="00000010") then
reg <= reg rol 1;
end if;
if(reg="00000100")then
reg <= reg rol 1;
end if;
if(reg="00001000")then
reg <= reg rol 1;
end if;
if(reg="00010000")then
reg <= reg rol 1;
end if;
if(reg="00100000")then
reg <= reg rol 1;
end if;
if(reg="01000000")then
reg <= reg rol 1;
end if;
if(reg="10000000")then
reg <= reg rol 1;
end if;
end if;


if (reset = '1') then
reg <= "11111111";
end if;

end process;



seg_out <= (seg_out_7 &dp);
seg_sel <= "1111" &seg_sel_4;

end Behavioral;

