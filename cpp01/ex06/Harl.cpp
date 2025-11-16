#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
              << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl
              << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{

    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};

    void (Harl::*funcPtr[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int index = -1;

    for (int i = 0; i <= 3; i++)
    {
        if (levels[i] == level)
        {
            index = i;
            break;
        }
    }

    // fall through >> tell the compiler , Yes, I know there is no break

    switch (index)
    {
        case 0:
            (this->*funcPtr[0])();
            // fall through
            case 1:
            (this->*funcPtr[1])();
            // fall through
        case 2:
            (this->*funcPtr[2])();
            // fall through
        case 3:
            (this->*funcPtr[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    
    }
}
