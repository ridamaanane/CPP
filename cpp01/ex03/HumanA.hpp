#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA 
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &Weapon); // constructor
        //&weapon It means the parameter of the constructor is a reference to a Weapon object.
        // It makes a copy of the weapon.
        // if the original weapon changes, HumanA’s weapon will change, because it’s a reference.
        
        void attack(); //printf message
};

#endif