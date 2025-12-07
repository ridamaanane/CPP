#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &object);
        Fixed& operator = (const Fixed& other);
        Fixed(int value);
        Fixed(float value);
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
        int toInt( void ) const;
        float toFloat( void ) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif


