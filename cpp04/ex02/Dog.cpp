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
    ptr = new Brain (*(other.ptr)); //deep copy happened here , Allocate a NEW Brain on the HEAP, using the copy constructor,(Create a new Brain by copying another Brain)
    /*
        Because ptr points to a Brain, not to a Dog (that's why the copy crated in brain not dog)
        All ideas[100] are copied
        New Brain object
        Independent memory
    */
    type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
        *ptr = *(other.ptr); // other.ptr hold the address of the other dog , we dereference it to get the Brain object (Copy the CONTENT of other’s Brain into my Brain) 🚫 No pointer copy ✅ Data copy only
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

Brain *Dog::getBrain() const
{
    return ptr;
}