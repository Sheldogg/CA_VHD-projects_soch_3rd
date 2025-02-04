library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity OR_Gate_tb is
end OR_Gate_tb;

architecture Behavioral of OR_Gate_tb is

    component OR_Gate
        Port (
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal A : STD_LOGIC := '0';
    signal B : STD_LOGIC := '0';
    signal Y : STD_LOGIC;

begin

    uut: OR_Gate Port map (
        A => A,
        B => B,
        Y => Y
    );

    
    stimulus: process
    begin
        
        A <= '0'; B <= '0';
        wait for 10 ns;

        
        A <= '0'; B <= '1';
        wait for 10 ns;

        
        A <= '1'; B <= '0';
        wait for 10 ns;

        
        A <= '1'; B <= '1';
        wait for 10 ns;

        
        wait;
    end process;

end Behavioral;