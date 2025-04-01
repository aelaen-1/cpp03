#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor\n";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap name constructor\n";
    _name = name;
    _hitPoints = this->FragTrap::_hitPoints;
    _energyPoints = this->ScavTrap::_energyPoints;
    _attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "DiamondTrap copy constructor\n";
    *this = other;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        std::cout << "DiamondTrap " << _name << " copied into " << other._name << std::endl;
        ClapTrap::operator=(other);
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor\n";
}

void    DiamondTrap::attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}