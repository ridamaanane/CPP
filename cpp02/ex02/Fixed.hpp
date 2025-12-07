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

        // arithmetic operators
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        // comparison operators
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        Fixed& operator++(); // ++x  
        Fixed operator++(int); // x++ 
        Fixed& operator--();        
        Fixed operator--(int); 

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif