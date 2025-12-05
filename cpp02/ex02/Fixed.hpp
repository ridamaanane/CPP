#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value; //value is a normal member variable of each object. Every object has its own copy of value
        static const int fractionalBits = 8; //static means it belongs to the class, not to any specific object ,So all objects share it, static members are not part of any object, constructors work per object
    public:
        Fixed();
        Fixed(const Fixed &object);
        Fixed& operator = (const Fixed& other); //copy assignment operator
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

        /* 
        without const because incerement and decrement 
        modifies *this (object)
        */


        
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

    /*
        std::ostream& : return type , std::cout , std::cerr , std::clog , std::ofstream (file output)
            All of them are ostream objects. So std::ostream is the type of these objects. 
            & means : we want to allow chaining: std::cout << a << b << c; The operator returns the SAME std::cout, 
            not a copy.So you can keep adding <<.
    

        When overloading the << operator for std::cout,the operator function must have exactly this signature:
        std::ostream& os : can be any output stream
            Examples of streams:
            std::cout → prints to terminal
            std::cerr → prints errors
            std::ofstream → prints to file
            & means : You don't want to copy std::cout, you want to use the real cout.

        const Fixed& obj : const means You cannot change rawBits or anything in fixed.
    */

#endif