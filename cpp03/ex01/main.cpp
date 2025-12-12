#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
    ScavTrap a("Rida");
    a.attack("Target");
    a.takeDamage(30);
    a.beRepaired(5);
    a.guardGate();

    ScavTrap b("Maanane");
    b.attack("Target");
    b.guardGate();

    ScavTrap c(a);
    c.attack("Target");
    c.takeDamage(200);
    c.beRepaired(100);
    c.guardGate();

    ScavTrap d;
    d = b;
    d.attack("Target");
    d.takeDamage(30);
    d.beRepaired(30);
    d.guardGate();
}
