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
        // if the original weapon changes, HumanA’s weapon will change, because it’s a reference.
        /*
        We use a reference here to guarantee that we receive a valid Weapon object.
        A reference cannot be NULL
        A reference binds to an existing object
        It is easy and safe to pass
        */

        void attack(); //printf message
};

#endif