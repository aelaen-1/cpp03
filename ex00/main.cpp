#include "ClapTrap.hpp"

int main()
{
    ClapTrap    A("Bing");
    ClapTrap    B("Bang");

    for (int i = 0; i < 8; i++)
        A.attack("Bang");
    B.takeDamage(10);
    B.beRepaired(10);
    B.attack("Bing");
    A.beRepaired(10);
    A.takeDamage(10);
    A.attack("Bang");
    return (0);
}