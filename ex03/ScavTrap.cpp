#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap()
{
    std::cout << "ScavTrap default constructor\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
    std::cout << "ScavTrap name constructor\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
: ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor\n";
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        std::cout << "ScavTrap " << _name << " copied into " << other._name << std::endl;
        this->ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " cannot attack: no energy point left\n";
        return;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " cannot attack: no hit point left\n";
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!\n";
    _energyPoints -= 1;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode.\n";
}