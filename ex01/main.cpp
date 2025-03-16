#include "ClapTrap.hpp"

// int main(void)
// {
//     ClapTrap    A("bing");
//     ClapTrap    B("bong");

//     A.attack(B._name);
//     // B.takeDamage(A.)

//     return (0);
// }

int main()
{
    ClapTrap    A("Bing");
    ClapTrap    B("Bang");

    // for (int i = 0; i < 12; i++)
    //     A.attack("Bang");

    for (int i = 0; i < 8; i++)
        A.attack("Bang");
    B.takeDamage(8);
    B.beRepaired(8);
    B.attack("Bing");
    A.beRepaired(10);
    A.takeDamage(10);
    A.takeDamage(11);
    A.attack("Bang");
    return (0);
}