#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name; //this-> tells C++: “I mean the object’s member, not the parameter.”
    this->weapon = NULL; // no weapon yet
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon; //means “the address of the weapon object that was passed”.
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
}