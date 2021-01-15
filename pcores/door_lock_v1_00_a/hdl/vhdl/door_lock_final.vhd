LIBRARY ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;
--use ieee.numeric_bit.all;
entity door_lock_final is
port  (
	clk    : in	std_logic;
	code  : in	std_logic_vector (19 downto 0) ;
	reset : in	std_logic;

        alarm  : out	std_logic;

	door    : out	std_logic
      );
end door_lock_final ;

architecture MEALY of door_lock_final  is

begin
  P1 :process (clk)
  begin  

if rising_edge(clk) then 

	if (reset ='0')then 
               
                 door<='0';
                  alarm <='0';
       
        
          elsif (code=X"28b04") then 
        
              door <='1';
                alarm <='0';

          elsif code= X"000b"then 
           alarm <='0';
               door <='0';
                    
		
          else         
	  door <='0'; 
          alarm <='1';
            --NS <= S0;
		
          end if;


       
end if;

 end process P1;
end MEALY;
