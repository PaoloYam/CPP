#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
public:

    PhoneBook();
    ~PhoneBook();
    void        add(void);
    void        search(void);
    void        get_info(std::string *str, std::string s);
    void        print_contact(int i);

private:

    Contact     _All_Contact[8];
    int         _nbr_contact;
    int         _total_contact;
};

#endif