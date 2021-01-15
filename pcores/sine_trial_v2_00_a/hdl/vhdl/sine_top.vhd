----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:02:59 01/12/2021 
-- Design Name: 
-- Module Name:    sine_top - Behavioral 
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
library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sine_top is
--	generic (nbits_in : integer := 8;
--				m_waves : integer  := 5
--				--nbits_out : integer := 9
--				);
    Port ( freq_1 : in  STD_LOGIC_VECTOR (7 downto 0);
           freq_2 : in  STD_LOGIC_VECTOR (7 downto 0);
           freq_sys : in  STD_LOGIC_VECTOR (7 downto 0);
			  n_waves  : in std_logic_vector (4 downto 0) := (1=>'1',others=>'0');
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
				en : in std_logic;
           final_out : out  STD_LOGIC_VECTOR (8 downto 0));
end sine_top;

architecture Behavioral of sine_top is
	--signals declaration
		signal f1,f2,f_s   				  : std_logic_vector ( 7 downto 0)  := (others=>'0');
		signal out_wave_1,out_wave_2    : std_logic_vector ( 8          downto 0)  := (others=>'0');
		signal en_1,en_2   				  : std_logic										  :=  '0';
		signal end_1,end_2              : std_logic										  :=  '0';
	--signals done
	
	--component section
		component sine_gen 
--			generic(nbits_in : natural := 8
--					--nbits_out: natural := 9
--						);
			port(f_sample : in std_logic_vector ( 7 downto 0) ;
				  f_sine   : in std_logic_vector ( 7 downto 0) ;
				  clk      : in std_logic			   ;
	           en       : in std_logic			   ;
	           rst      : in std_logic			   ;
	           out_wave : out std_logic_vector  ( 8 downto 0);
	           end_out  : out std_logic			   );
		        
		end component sine_gen;
	--components done
begin

	--component instances 
		sine_comp_1 : sine_gen 
				port map ( f_sample => f_s ,
							  f_sine   => f1,
							  clk      => clk ,
							  en       => en_1,
							  rst      => rst ,
							  out_wave => out_wave_1 ,
							  end_out  =>  end_1 );
							  
		sine_comp_2 : sine_gen 
				port map ( f_sample => f_s ,
							  f_sine   => f2,
							  clk      => clk ,
							  en       => en_2,
							  rst      => rst ,
							  out_wave => out_wave_2 ,
							  end_out  =>  end_2 );
	--components done
	
	--Behavioral part
	behav : process (clk)
			--initializations
			variable counter                     : integer                             := 0                                      ;
			variable n_runs						    : integer                             :=  5        ;
			variable final_tmp						 : std_logic_vector ( 8     downto 0)  := (others=>'0')                          ;
			--end of inits.
			begin

			if rising_edge(clk) then
				if rst = '0' then
					counter := 0;
					
				elsif en = '1' then
					case counter is
						--case 1
						when 0 => 
							en_1 <= '1';
							en_2 <= '0';
							counter := counter  + 1;
							final_tmp := out_wave_1;
							n_runs := 5;
						--case 2
						when 1 =>
							if en_1 ='1' and end_1 ='1' then
								en_1 <= '0';
								en_2 <= '1';
								counter := counter + 1;
							else
								final_tmp := out_wave_1;
							end if;
						--case 3
						when others =>
							if en_2 ='1' and end_2 = '1' then
								en_1 <= '1';
								en_2 <= '0';
								if n_runs > 1 then
									counter   :=  1 ;
									n_runs := n_runs-1;
								else
									en_1 <= '0';
									en_2 <= '0';
								end if;
							else
								final_tmp := out_wave_2;

							end if;
					end case;
						final_out <= final_tmp;
					end if;
			end if;
	end process behav;
	--End of behavioral
	
	--Signals
	f1        <= freq_1;
	f2        <= freq_2;
	f_s       <= freq_sys;
	--end signals
	
							  

end Behavioral;

