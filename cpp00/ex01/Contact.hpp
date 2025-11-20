#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_Name;
        std::string last_Name;
        std::string nickName;
        std::string phone_Number;
        std::string darkest_Secret;


    public:
        void setFirstName(std::string name);
        void setLastName(std::string name);
        void setNickname(std::string name);
        void setPhoneNumber(std::string phone);
        void setDarkestSecret(std::string secret);

        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        
};

#endif