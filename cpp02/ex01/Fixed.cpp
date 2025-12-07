#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed &object)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = object;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->value = other.getRawBits();
        return (*this);
    }
    return (*this);
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value =  value << fractionalBits; //*8
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;

    this->value = roundf(value * 256);
}

void Fixed::setRawBits( int const value )
{
    this->value = value;
}

int Fixed::getRawBits( void ) const
{   
    return (value);
}

int Fixed::toInt( void ) const
{
    return (value >> fractionalBits);
}

float Fixed::toFloat( void ) const
{
    return (getRawBits() / 256.0f);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}