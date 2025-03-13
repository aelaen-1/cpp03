#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:_hitPoints(10), _energyPoints(10), _attackDamage(10)
{
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other)
{
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
}

void    ClapTrap::attack(const std::string& target)
{

}

void    ClapTrap::takeDamage(unsigned int amount)
{

}

void    ClapTrap::beRepaired(unsigned int amount)
{

}