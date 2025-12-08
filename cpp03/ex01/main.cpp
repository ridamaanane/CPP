#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap a("Rida");

    a.attack("Enemy");
    a.takeDamage(10);
    a.beRepaired(3);

    a.takeDamage(20);
    a.beRepaired(7);
}
