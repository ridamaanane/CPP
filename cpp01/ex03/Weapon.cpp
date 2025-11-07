#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type; //or you can rename the parameter, because this-> mean the name of varible in the private 
}

void Weapon::setType(const std::string &newtype)
{
    type = newtype;
}

const  std::string &Weapon::getType() const //& we put it after the type not the class
{
    return (type);
}

