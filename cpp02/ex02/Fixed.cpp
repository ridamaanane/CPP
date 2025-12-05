#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed &object)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = object; //"*this" to access to the current object , purpose calls the assignment operator (the logic of operator '=')
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->value = other.getRawBits(); //take the internal value from other and put it in this object
        return (*this);
    }
    return (*this);
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value =  value << fractionalBits;
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

    /*
    Both numbers are integers → C++ does integer division → result is 10, NOT 10.5
    To fix it, divide by float 256.0f
    Now C++ treats it as floating-point division → result = 10.5
    */
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

// arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->value + other.value); //result object now contains the sum.
    return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->value - other.value); 
    return (result);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->value * other.value); 
    return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(this->value / other.value); 
    return (result);
}

// comparison operators
bool Fixed::operator>(const Fixed& other) const
{
    if (this->value > other.value)
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed& other) const
{
    if (this->value < other.value)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
    if (this->value >= other.value)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
    if (this->value <= other.value)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
    if (this->value == other.value)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
    if (this->value != other.value)
        return (true);
    return (false);
}
//increment && decrement
Fixed& Fixed::operator++() //pre increment    
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)  //Post-increment   (The int is never used, it’s only a marker) (we pass by value for safely , the refference here pass the old object , but we don't need that when fucntion end the old destroyed , You would be returning a reference to destroyed memory )
{
    Fixed old(*this); //copy and store it in old
    this->value++;
    return (old); //You return the "photo" (copy), not the real object
}

Fixed& Fixed::operator--()        
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    this->value--;
    return (old);
}
