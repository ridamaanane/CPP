#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap a("Rida");
    a.attack("Target");
    a.takeDamage(10);
    a.beRepaired(3);

    ClapTrap b;
    b.attack("Target");
    b.takeDamage(5);
    b.beRepaired(10);

}
