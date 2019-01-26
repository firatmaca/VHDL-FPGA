--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:28:40 11/28/2018
-- Design Name:   
-- Module Name:   C:/Users/v1/Desktop/lab7/workk.vhd
-- Project Name:  lab5_1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY workk IS
END workk;
 
ARCHITECTURE behavior OF workk IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk100Mhz : IN  std_logic;
         reset : IN  std_logic;
         up_down : IN  std_logic;
         enable : IN  std_logic;
			catch:out std_logic;
			 --b0:out std_logic_vector(5 downto 0):="000000";
         ledo : OUT  std_logic_vector(7 downto 0);
         seg_out : OUT  std_logic_vector(7 downto 0);
         seg_sel : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk100Mhz : std_logic := '0';
   signal reset : std_logic := '0';
   signal up_down : std_logic := '0';
   signal enable : std_logic := '1';

 	--Outputs
	--signal b0: std_logic_vector(5 downto 0);
	signal catch : std_logic;
   signal ledo : std_logic_vector(7 downto 0);
   signal seg_out : std_logic_vector(7 downto 0);
   signal seg_sel : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk100Mhz_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk100Mhz => clk100Mhz,
          reset => reset,
          up_down => up_down,
          enable => enable,
			 catch=>catch,
			 --b0=>b0,
          ledo => ledo,
          seg_out => seg_out,
          seg_sel => seg_sel
        );

   -- Clock process definitions
   clk100Mhz_process :process
   begin
		clk100Mhz <= '0';
		wait for clk100Mhz_period/2;
		clk100Mhz <= '1';
		wait for clk100Mhz_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 105 ns;	

      wait for clk100Mhz_period*10;
		up_down<='1';
		wait for 10 ns;
		up_down<='1';
		wait for 10 ns;
		up_down<='0';
		wait for 10 ns;
		up_down<='1';
		wait for 10 ns;
		up_down<='1';
		wait for 10 ns;
		up_down<='1';
		wait for 10 ns;
		up_down<='1';
		wait for 10 ns;
		up_down<='0';
		wait for 10 ns;
		up_down<='1';
		wait for 10 ns;
      -- insert stimulus here 

      wait;
   end process;

END;
