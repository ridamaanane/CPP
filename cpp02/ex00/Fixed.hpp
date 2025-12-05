#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int rawBits; //can't initliaze here , that's why we use the static const
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &object);
        Fixed& operator = (const Fixed& other); //copy assignment operator
        ~Fixed();
        void setRawBits( int const raw );
        int getRawBits( void ) const;
};
std::ostream& operator<<(std::ostream &os, const Fixed& object);
#endif