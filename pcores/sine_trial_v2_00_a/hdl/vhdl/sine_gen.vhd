library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
entity sine_gen is
--	generic(nbits_in : natural := 8
--		--nbits_out: natural := 9
--		);
	port(f_sample : in std_logic_vector ( 7 downto 0) ;
	     f_sine   : in std_logic_vector ( 7 downto 0) ;
		 -- f_sine_2   : in std_logic_vector ( nbits_in-1 downto 0) ;
	     clk      : in std_logic			   ;
	     en       : in std_logic			   ;
	     rst      : in std_logic			   ;
	     out_wave : out std_logic_vector  ( 8 downto 0);
	    --test     : out std_logic_vector  ( 8 downto 0);
	     end_out  : out std_logic			   );
end entity sine_gen;

architecture behav of sine_gen is
	constant max   : signed ( 8 downto 0)  := ('0',others=>'1')		;
	constant min   : signed ( 8 downto 0)  := (8=>'1',0=>'1',others=>'0')   ;
begin
	op : process (clk)
		variable n_steps,counter          : integer       := 0			    ;
		variable first_sig,count_up,done  : std_logic     := '1'		    ;
		variable n_counter  	          : integer       :=  0			    ;
		variable y_val	                  : integer       :=  0			    ;
		variable y_step     	          : integer       :=  0			    ;

	begin
		if rising_edge(clk) then
			if (rst = '0') then
				n_steps   :=  0;
				y_val     :=  0;
				done      := '0';
				first_sig := '1';
			elsif en = '1' then
				case first_sig is
					when '1'=>
					if unsigned(f_sample) > 2*unsigned( f_sine) then
						n_steps   :=  to_integer(unsigned(f_sample)/unsigned(f_sine));
						done  	 := '0';
						else
						n_steps:=1;
						end if;
						y_step    := (to_integer(max)*4)/n_steps;
						y_val     :=  0;
						first_sig := '0';
						count_up  := '1';
						counter   :=  0;	

					when others=>
					if n_steps < 2 then
					 counter := n_steps;
				 
              else					 
						case count_up is
							when '1'=>
								y_val   := y_val + y_step;
								counter := counter + 1   ;
								if y_val >= to_integer(max) then
									y_val    := to_integer(max);
									count_up := '0';
								else
									count_up := '1';
								end if;
							when others =>
								y_val   := y_val - y_step;
								counter := counter + 1   ;
								if y_val <= to_integer(min) then
									y_val    := to_integer(min);
									count_up := '1';
								else
									count_up := '0';
								end if;
						end case;
				end if;	
						if counter = n_steps then
							done  := '1';
							y_val :=  0;
							first_sig := '1';
							counter := 0;
						else
							done  :='0';
						end if;
					end case;		
			end if;
			out_wave <= std_logic_vector(to_signed(y_val,9))	 ;
			end_out  <= done	     	 ;
			--test     <= std_logic_vector(to_signed(y_step,9));
		end if;

	end process op;

end architecture behav;