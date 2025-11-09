#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) //we initialise the weapon here because the reference cannot be empty (need to initialized immediately)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

// If you try to do it inside the body:

// HumanA::HumanA(std::string name, Weapon &weapon)
// {
//     this->weapon = weapon;  // too late — weapon wasn’t initialized yet
// }