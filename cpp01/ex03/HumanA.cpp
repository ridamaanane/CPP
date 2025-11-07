#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{

}

void HumanA::attack()
{
    std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}

// If you try to do it inside the body:

// HumanA::HumanA(std::string name, Weapon &weapon)
// {
//     this->weapon = weapon;  // ❌ too late — weapon wasn’t initialized yet
// }