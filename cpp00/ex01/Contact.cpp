#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
    first_Name = name;
}
void Contact::setLastName(std::string name)
{
    last_Name = name;
}

void Contact::setNickname(std::string name)
{
    nickName = name;
}

void Contact::setPhoneNumber(std::string phone)
{
    phone_Number = phone;
}

void Contact::setDarkestSecret(std::string secret)
{
    darkest_Secret = secret;
}

std::string Contact::getFirstName()
{
    return first_Name;
}

std::string Contact::getLastName()
{
    return last_Name;
}

std::string Contact::getNickname()
{
    return nickName;
}

std::string Contact::getPhoneNumber()
{
    return phone_Number;
}

std::string Contact::getDarkestSecret()
{
    return darkest_Secret;
}


