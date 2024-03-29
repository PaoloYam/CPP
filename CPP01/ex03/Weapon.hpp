#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon();
    std::string const & getType();
    void                setType(std::string att);

private:
    std::string _type;
};

#endif