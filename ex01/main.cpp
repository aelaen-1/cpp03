#include "ScavTrap.hpp"

int main()
{
    ScavTrap    A("BING");
    ScavTrap    B("BANG");

    for (int i = 0; i < 8; i++)
    {
        A.attack("BANG");
        B.takeDamage(20);
    }
    B.beRepaired(100);
    B.guardGate();
    return (0);
}