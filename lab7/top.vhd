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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
    Port ( clk100Mhz : in  STD_LOGIC;
			  reset : in  STD_LOGIC;
           up_down : in  STD_LOGIC;
           enable : in  STD_LOGIC;
			  --catch:out STD_LOGIC;
			
			  ledo:out std_logic_vector(7 downto 0);
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
component binary_bcd is
generic(N: positive := 6);
port(
clk, reset: in std_logic;
binary_in: in std_logic_vector(N-1 downto 0);
-- bcd0, bcd1, bcd2, bcd3, bcd4: out std_logic_vector(3 downto 0)
bcd0, bcd1: out std_logic_vector(3 downto 0)
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

type  state_type is (s0,s1,s2,s3,s4);
signal leds:std_logic_vector(7 downto 0):="00000000";
signal sout:std_logic;
signal present_state,next_state: state_type;
signal clk1,w0,w1,w2,w3,dp: STD_LOGIC;
signal b0,b1,b2,b3 : STD_LOGIC_VECTOR(5 downto 0):="000000";
signal hexa,hexa2:std_logic_vector(7 downto 0):="00000000";
signal seg_out_7 :STD_LOGIC_VECTOR(6 downto 0);
signal seg_sel_4 : STD_LOGIC_VECTOR(3 downto 0);
signal bcdout1,bcdout2,bcdout3,bcdout4,swhat:STD_LOGIC_VECTOR(3 downto 0);
signal sfr:STD_LOGIC;
begin
A1:converter port map(clk100Mhz,enable,reset,clk1);
--A4:binary_bcd port map(clk100Mhz,reset,b0,bcdout1,bcdout2);
--A6 :seven_four port map (bcdout1, bcdout2, swhat, "0000", clk100Mhz, dp,seg_sel_4,seg_out_7);
A6 :seven_four port map (hexa2(7 downto 4), hexa2(3 downto 0), swhat, "0000", clk100Mhz, dp,seg_sel_4,seg_out_7);

seg_out <= (seg_out_7 &dp);
seg_sel <= "1111" &seg_sel_4;
--ledo<=leds;
--sreg:process(clk1,reset)
sreg:process(clk1,reset)
begin
	if reset = '1' then 
		present_state<=s0;
		--swhat<="0000";
		ledo<="00000000";
		leds<="00000000";
	elsif clk1'event and clk1='1' then
		if enable='1' then
		present_state<=next_state;
		leds<=leds(6 downto 0) & up_down;
		ledo<=leds;
		else
		present_state<=present_state;
		leds<=leds;
		ledo<=leds;
		end if;
		--b0<=b0+"1";
	end if;
end process;

C1: process(present_state,up_down)
begin
	case present_state is
		when s0=>
			swhat<="0000";
			if up_down='1' then
				next_state<=s1;
			else
				next_state<=s0;
			end if;
		when s1=>
			swhat<="0001";
			if up_down='1' then
				next_state<=s2;
			else
				next_state<=s0;
			end if;
		when s2=>
			swhat<="0010";
			if up_down='0' then
				next_state<=s3;
			else
				next_state<=s2;
			end if;
		when s3=>
			swhat<="0011";
			if up_down='1' then
				next_state<=s4;
			else
				next_state<=s0;
			end if;
		when s4=>
			swhat<="0100";
			if up_down='0' then
				next_state<=s0;
			else
				next_state<=s2;
			end if;
		when others =>
			null;
	end case;
end process;

C2:process(present_state)
begin
	if present_state=s4 then
		sout<='1';
		--b0<=std_logic_vector(unsigned(b0) + 1);
		b0<=b0+"1";
		hexa2<=hexa+"1";
		
	else
		sout<='0';
		hexa<=hexa2;
	end if;
end process;
--catch<=sout;

end Behavioral;

