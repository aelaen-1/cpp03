#include "ScavTrap.hpp"

int main()
{
    ScavTrap    A("BING");
    ScavTrap    B("BANG");
    ScavTrap    C;
    for (int i = 0; i < 8; i++)
    {
        A.attack("BANG");
        B.takeDamage(20);
    }
    B.beRepaired(100);
    B.attack("BANG");
    B.guardGate();
    A.guardGate();

    C = A;
    C.attack("BANG");
    A.takeDamage(20);
    return (0);
}