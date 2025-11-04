#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie* horde = new Zombie[N];   // creates array of N zombies
    if (!horde)
        return NULL;
    while (i < N)
    {
        horde[i].setName(name); // assign name to each zombie
        i++;
    }
    return (horde);
}