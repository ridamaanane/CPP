#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>


PhoneBook::PhoneBook()
{
    contact_count = 0;
}

void PhoneBook::AddContact(Contact c)
{
    if (contact_count < 8)
    {
        contacts[contact_count] = c;
        contact_count++;
    }
    else
    {
        contacts[contact_count % 8] = c;
        contact_count++;
    }
    std::cout << "Contact added Successfully ✅." << std::endl;

}


void PhoneBook::DisplayContact(int index)
{
    std::cout << "First Name: "    << contacts[index].getFirstName()    << std::endl;
    std::cout << "Last Name: "     << contacts[index].getLastName()     << std::endl;
    std::cout << "Nickname: "      << contacts[index].getNickname()     << std::endl;
    std::cout << "Phone Number: "  << contacts[index].getPhoneNumber()  << std::endl;
    std::cout << "Darkest Secret: "<< contacts[index].getDarkestSecret()<< std::endl;
}

void PhoneBook::SearchContacts()
{
    if (contact_count == 0)
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contact_count; i++)
    {
        std::cout << std::setw(10) << i << "|"
                << std::setw(10) << contacts[i].getFirstName().substr(0, 9)<< (contacts[i].getFirstName().length() > 10 ? '.' : '\0') << "|"
                << std::setw(10) << contacts[i].getLastName().substr(0, 9)<< (contacts[i].getFirstName().length() > 10 ? '.' : '\0') << "|"
                << std::setw(10) << contacts[i].getNickname().substr(0, 9)<< (contacts[i].getFirstName().length() > 10 ? '.' : '\0') << std::endl;
    }

    while (true)
    {
        std::string input;
        std::cout << "Enter index: ";
        std::getline(std::cin, input);

        int index;
        std::stringstream ss(input);
        ss >> index;

        if (std::cin.eof()) // CTRL+D -> exit loop
            break;
        
        if (input.empty())
        {
            std::cout << "Index cannot be empty!" << std::endl;
        }
        else if (index < contact_count)
            DisplayContact(index);
        else
        {
            std::cout << "You have only 8 Contacts" << std::endl;
            continue;
        }
    }
}
