#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap()
{
    std::cout << "FragTrap default constructor\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
    std::cout << "FragTrap name constructor\n";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap copy constructor\n";
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        std::cout << "FragTrap " << _name << " copied into " << other._name << std::endl;
        this->ClapTrap::operator=(other);
    }
    return (*this);
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " asked for a high five and got one\n";
}