#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructed Called" << std::endl;
    name = "Default Name of Claptrap";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string &name) : name(name)
{
    std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor! Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{

    std::cout << "ClapTrap Copy Constructed Called" << std::endl;

    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
}


ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;

    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return (*this);
}


void ClapTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    
    std::cout << "ClapTrap "<< name << " took " << amount<<  " damage, hitPoints is now " << hitPoints << "!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
    {
        std::cout << "ClapTrap can't repair because it has no hitPoints" << std::endl;
        return ;
    }
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap has no energy" << std::endl;
        return ;
    }

    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap repaired and now has " <<  hitPoints << " hitPoints" << std::endl;
}
