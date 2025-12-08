#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructed Called" << std::endl;
    name = "Default";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{

}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destroyed! Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{

    std::cout << "Copy Constructed Called" << std::endl;

    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}


ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
    if (this == &other)
        return (*this);

    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;

    return (*this);
}


void ClapTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        energyPoints++;
        std::cout << "ClapTrap" << name << "attacks" << target << ", causing" << attackDamage << "points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap" << name <<  "can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
}

void ClapTrap::beRepaired(unsigned int amount)
{

}
