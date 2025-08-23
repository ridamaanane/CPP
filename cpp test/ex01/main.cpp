#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>



int main()
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        if (std::cin.eof()) // CTRL+D -> exit loop
            break;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
        {
            std::cout << std::endl << "Exiting program." << std::endl;
            break;
        }

        if (command == "ADD")
        {
            Contact c;
            std::string input;

            std::cout << "Enter First Name: ";
            if (!std::getline(std::cin, input))
            {
                std::cout << std::endl << "Exiting program." << std::endl;
                break;
            }
            c.setFirstName(input);
            if (c.getFirstName().empty())
            {
                std::cout << "Enter a valid name" << std::endl;
                continue;
            }
            std::cout << "Enter Last Name: ";
            if (!std::getline(std::cin, input))
            {
                std::cout << std::endl << "Exiting program." << std::endl;
                break;
            }            
            c.setLastName(input);
            if (c.getLastName().empty())
            {
                std::cout << "Enter a valid name" << std::endl;
                continue;
            }

            std::cout << "Enter Nickname: ";
            if (!std::getline(std::cin, input))
            {
                std::cout << std::endl << "Exiting program." << std::endl;
                break;
            }            
            c.setNickname(input);
            if (c.getNickname().empty())
            {
                std::cout << "Enter a valid name" << std::endl;
                continue;
            }

            while (true)
            {
                std::cout << "Enter Phone Number: ";
                if (!std::getline(std::cin, input))
                {
                    std::cout << std::endl << "Exiting program." << std::endl;
                    break;
                }            
                c.setPhoneNumber(input);
                if (c.getPhoneNumber().empty())
                {
                    std::cout << "Enter a valid number" << std::endl;
                    continue;
                }
                int convert = atoi(c.getPhoneNumber().c_str());
                // std::stringstream ss(c.getPhoneNumber());
                // ss >> convert;
                if (convert == 0)
                {
                    std::cout << "Enter a valid phone number" << std::endl;
                    continue;
                }
                else
                    break;
            }

            std::cout << "Enter Darkest Secret: ";
            if (!std::getline(std::cin, input))
            {
                std::cout << std::endl << "Exiting program." << std::endl;
                break;
            }            
            c.setDarkestSecret(input);
            if (c.getDarkestSecret().empty())
            {
                std::cout << "Enter a valid secret" << std::endl;
                continue;
            }
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
        else
        {
            std::cout << "\n";
            break ;
        }
    }
}

