----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:08:08 01/13/2021 
-- Design Name: 
-- Module Name:    adder_trial - Behavioral 
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
library IEEE;use IEEE.STD_LOGIC_1164.ALL;use IEEE.STD_LOGIC_UNSIGNED.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;



-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity adder_trial is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  en : in std_logic;
           c : out  STD_LOGIC);
end adder_trial;

architecture Behavioral of adder_trial is

begin
process(clk)
	begin
		if rising_edge(clk) then
			if rst='0' then
				c <= '0';
			elsif en = '1' then
				c <= a xor b;
			end if;
		end if;
end process;

end Behavioral;

