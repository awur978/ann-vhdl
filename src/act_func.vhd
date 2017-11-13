--------------------------------------------
-- - Definition of activation functions - --
-------------------------------------------- 

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.types.all;

entity act_func is
	port(
		clk      : in  std_logic;
		rst      : in  std_logic;
		start_i  : in  std_logic;
		input_i  : in  std_logic_bus;
		output_o : out std_logic_bus;
		done_o   : out std_logic
	);
end entity act_func;

-- McCulloch-Pitts "all-or-none" activation function (threshold)
architecture threshold of act_func is
	signal output_s : std_logic_bus := x"00";
	signal done_s   : std_logic     := '0';
begin
	process(clk, rst) is
	begin
		if rst = '1' then
			done_s   <= '0';
			output_s <= x"00";
		end if;

		if rising_edge(clk) then
			if start_i = '1' and input_i(width - 1) = '0' then
				done_s   <= '1';
				output_s <= x"01";
			elsif start_i = '1' then
				done_s   <= '1';
				output_s <= x"00";
			else
				done_s   <= '0';
				output_s <= x"00";
			end if;
		end if;

	end process;

	done_o   <= done_s;
	output_o <= output_s;

end architecture threshold;

architecture tanh of act_func is
begin

end architecture tanh;