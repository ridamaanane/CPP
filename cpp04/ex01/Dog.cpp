#include "Dog.hpp"

Dog::Dog()
{ 
    ptr = new Brain;
    type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    ptr = new Brain (*(other.ptr));
    type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
        *ptr = *(other.ptr);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
    delete ptr;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}