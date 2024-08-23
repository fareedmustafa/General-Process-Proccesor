LIBRARY ieee
USE ieee.scd logic i i €4 . all;
ENTITY latch IS
PORT ( A : IN STD LOGIC VECTOR (7 DOWNTO 0)
Resetn, Clock : IN STD LOGIC
Q : OUT STD LOGIC VECTOR (7 DOWNTO 0) )
END latch ;
ARCHITECTURE Behavior OF latch IS
BEGIN
PROCESS ( Resetn, Clock )
BEGIN
IF Resetn ='0' THEN
Q <= "00000000" •
ELSIE Clock'EVENT AND Clock =
END IF;
END PROCESS;
END Behavior ;
THEN
