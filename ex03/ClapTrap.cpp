#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor\n";
    *this = other;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        std::cout << "ClapTrap " << _name << " copied into " << other._name << std::endl;
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap name constructor\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " <<_name << " cannot attack : no energy point left\n";
        return ;
    }
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot attack : no hit point left\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks "
    << target << " causing " << _attackDamage <<  " points of damage!\n";
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't take damage, it already has no hit point left\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " has lost "
    << amount << " hit points!\n";
    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot be repaired : no hit point left\n";
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot be repaired : no energy point left\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " has recovered "
    << amount << " hit points!\n";
    _hitPoints += amount;
    _energyPoints -= 1;
}