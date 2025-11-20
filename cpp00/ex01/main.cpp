#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <sstream>
#include <stdlib.h>


bool safeGetline(std::string &out)
{
    if (!std::getline(std::cin, out))
    {
        std::cout << "\nExiting program.\n";
        return false;  // EOF or error
    }
    return true;
}

std::string getValidInput(const std::string &prompt)
{
    std::string input;
    while (true)
    {
        std::cout << prompt;               
        if (!safeGetline(input))
        {
            std::cout << "\nExiting program.\n";
            exit(0);
        }
        if (!input.empty())
            return (input);
        std::cout << "Input cannot be empty. Try again.\n";
    }
}


int main()
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!safeGetline(command))
            break;
    
        if (command == "ADD")
        {
            Contact c;
            std::string input;

            c.setFirstName(getValidInput("Enter First Name: "));
            c.setLastName(getValidInput("Enter Last Name: "));
            c.setNickname(getValidInput("Enter Nickname: "));
            c.setPhoneNumber(getValidInput("Enter Phone Number: "));
            c.setDarkestSecret(getValidInput("Enter Darkest Secret: "));
            phonebook.AddContact(c);
        }

        else if (command == "SEARCH")
            phonebook.SearchContacts();
        else if (command == "EXIT")
        {
            std::cout << "You Exiting The PhoneBook" << std::endl;
            break;
        }
        else if (command != "")
            std::cout << "Unknown command!" << std::endl;
        else if (command.empty())
            std::cout << "Please write a valid command" << std::endl;
    }
}

// int main()
// {
//     Contact phone;

//     phone.setFirstName("rida");

//     std::cout << phone.getFirstName() << std::endl;



//     std::string rida = phone.getFirstName();

//     rida[0] = 's';

//     std::cout << phone.getFirstName() << std::endl;

//     std::cout << rida;  
// }