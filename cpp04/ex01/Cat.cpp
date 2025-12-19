#include "Cat.hpp"

Cat::Cat()
{ 
    ptr = new Brain;
    type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    ptr = new Brain (*(other.ptr));
    type = other.type;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
        *ptr = *(other.ptr);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
    delete ptr;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}