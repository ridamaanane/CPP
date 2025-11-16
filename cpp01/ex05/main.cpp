#include "Harl.hpp"


int main()
{
    Harl object;

    std::cout << "Testing DEBUG level:" << std::endl;
    object.complain("DEBUG");

    std::cout << "\nTesting INFO level:" << std::endl;
    object.complain("INFO");

    std::cout << "\nTesting WARNING level:" << std::endl;
    object.complain("WARNING");

    std::cout << "\nTesting ERROR level:" << std::endl;
    object.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    object.complain("INVALID");

}