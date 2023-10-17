#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{

public:

    Contact();
    ~Contact();

    std::string getFirstName(void) const;
    void        setFirstName(std::string str);

    std::string getLastName(void) const;
    void        setLastName(std::string str);

    std::string getNickName(void) const;
    void        setNickName(std::string str);

    std::string getNumber(void) const;
    void        setNumber(std::string str);

    std::string getDS(void) const;
    void        setDS(std::string str);

private:

    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string Number;
    std::string DS;

};

#endif