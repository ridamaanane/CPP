#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_count;
        int index;

    public:
        PhoneBook();
        void AddContact(Contact c);
        void DisplayContact(int index);
        void SearchContacts();
};

#endif