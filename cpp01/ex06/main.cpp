#include "Harl.hpp"


int main(int ac, char **av)
{

    if (ac != 2)
        return (1);
        
    Harl object;
    object.complain(av[1]);

}