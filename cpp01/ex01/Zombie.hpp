#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie(); //in subject we will create N zombies automatically — but it does not know the name yet.
        ~Zombie();
        void setName(std::string name);
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif