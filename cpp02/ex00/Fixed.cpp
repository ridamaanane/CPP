#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
    // rawBits = 0;
}

Fixed::Fixed(const Fixed &object)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = object; //"this" to access to the current object , without it maybe the compiler can think the variable is local
    //the purpose of this line for calling the copy assignment" 

    /*
        So the copy constructor does NOT copy anything directly
        It delegates the job to the copy assignment operator.
    */
}

Fixed& Fixed::operator=(const Fixed& other) //If you didn’t write it yet → the compiler’s default assignment operator is used.
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