#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB 
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        //HumanB does not always have a weapon.
        // That means the constructor should only take the name, and the weapon should be set later using a setWeapon() function.
        void setWeapon(Weapon &weapon);
        void attack();

};

#endif