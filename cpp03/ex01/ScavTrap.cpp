#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;    
    name = "Default Name of Scavtrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destroyed! Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "Copy ScavTrap Called" << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator= (other);
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " can't attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}