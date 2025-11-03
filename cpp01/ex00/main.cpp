#include "Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("first zombie");
    Zombie *z2 = newZombie("second zombie");

    z1->announce();
    z2->announce();

    delete(z1); //called the destructor automatically
    delete(z2);

    std:: cout << "end of main" << std::endl;
}
