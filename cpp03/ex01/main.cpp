#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
    // ScavTrap a("Rida");
    // a.attack("Enemy");
    // a.takeDamage(30);
    // a.beRepaired(5);
    // a.guardGate();

    ScavTrap b("Hassan");
    b.attack("Enemy");
    b.takeDamage(10);
    b.beRepaired(0);
    b.guardGate();

    // ScavTrap c(a);
    // c.attack("Enemy");
    // c.takeDamage(200);
    // c.beRepaired(100);
    // c.guardGate();


    ScavTrap d;
    d = b;
    d.attack("Enemy");
    d.takeDamage(-30);
    d.beRepaired(30);
    d.guardGate();
}
