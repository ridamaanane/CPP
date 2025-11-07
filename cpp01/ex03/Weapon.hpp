#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    private:
        std::string type;

    public:
        Weapon(std::string type);
        const std::string &getType() const; //first const means the caller cannot modify the returned string (read-only). , second const means the function will not modify any member variables (without first const the compiler give u error)
        void setType(const std::string &newtype);


};

#endif