#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
    std::cout << "WrongCat Parameterized Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    type = other.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}