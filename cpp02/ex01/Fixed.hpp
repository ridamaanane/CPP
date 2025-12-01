#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
//#include <ostream>

class Fixed
{
    private:
        int rawBits;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(int Value);
        Fixed(float Value);
        Fixed(const Fixed &object);
        Fixed& operator = (const Fixed& other); //copy assignment operator
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
        int toInt( void ) const;
        float toFloat( void ) const;

};

std::ostream& operator<<(std::ostream& os, Fixed const &fixed);


#endif