#include "DiamondTrap.hpp"

// • Hit points (FragTrap)
// • Energy points (ScavTrap)
// • Attack damage (FragTrap)
// • attack() (ScavTrap)

int main()
{
    DiamondTrap A("Josepha");
    DiamondTrap B("Cristiano");
    
    A.whoAmI();
    B.whoAmI();
    
    // attack scavtrap
    A.attack("Josepha");
    A.highFivesGuys();
    A.guardGate();
    
    DiamondTrap Copy = B;
    Copy.whoAmI();
    Copy = A;
    Copy.whoAmI();
    Copy.guardGate();
    B.highFivesGuys();
    
    return 0;
}