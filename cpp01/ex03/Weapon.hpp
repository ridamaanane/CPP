#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    private:
        std::string type;

    public:
        Weapon(std::string type);
        const std::string &getType() const; //First const: makes the returned value read-only. Second const: means the function doesn’t change anything inside the class. Both are for safety but control different things. (read-only). , second const means the function will not modify any member variables (without first const the compiler give u error)
        void setType(const std::string &newtype); //const means the parameter newtype can’t be changed inside the function (you can use it, not modify it). the const necessary if you remove it the main doesn't work because the strings in the main is literals (modifie inside the setType read the discord to understand)


};

#endif  