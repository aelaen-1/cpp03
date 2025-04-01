#include "FragTrap.hpp"

// _hitPoints = 100;
// _energyPoints = 100;
// _attackDamage = 30;


int main()
{
	FragTrap	A("Albert");
	FragTrap	B("Jacques");
	FragTrap	C("Josepha");

	B.highFivesGuys();
	A.highFivesGuys();
	C.highFivesGuys();
	
	for(int i = 0; i < 10; ++i)
	{
		A.attack("Jacques");
		B.takeDamage(30);
	}

	B.beRepaired(100);
	B.attack("Albert");
	A.takeDamage(30);

	for(int i = 0; i < 3; ++i)
	{
		C.attack("Albert");
		A.takeDamage(30);
	}
	//plus de hitpoints
	A.attack("Josepha");

	C.beRepaired(90);
	C.highFivesGuys();

	//plus de hitpoints
	B.attack("Josepha");

	A = C;
	A.attack("Josepha");
	C.takeDamage(30);
	A.highFivesGuys();
	return (0);
}