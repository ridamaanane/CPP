#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main()
{
    FragTrap a("Rida");
    a.attack("Target");
    a.takeDamage(30);
    a.beRepaired(5);
    a.highFivesGuys();

    FragTrap b("maanane");
    b.takeDamage(10);
    b.beRepaired(0);

    FragTrap c(a);
    c.takeDamage(200);
    c.beRepaired(100);


    FragTrap d;
    d = b;
    d.highFivesGuys();
}
