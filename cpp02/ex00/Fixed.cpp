#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
    rawBits = 0;
}

Fixed::Fixed(const Fixed &object)
{
    std::cout << "Copy Constructor Called" << std::endl;
    this->rawBits = object.getRawBits(); //"this" to access to the current object , without it maybe the compiler can think the variable is local
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->rawBits = other.getRawBits(); //take the internal value from other and put it in this object
        return (*this);
    }
    return (*this);
}

void Fixed::setRawBits( int const raw )
{
    rawBits = raw;
}

int Fixed::getRawBits( void ) const
{   
    std::cout << "getRawBits member function called" << std::endl;
    return (rawBits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}