#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int rawBits;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &object);
        Fixed& operator = (const Fixed& other);
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};
std::ostream& operator<<(std::ostream &os, const Fixed& object);
#endif