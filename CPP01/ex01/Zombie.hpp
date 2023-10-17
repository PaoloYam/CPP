#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void        annouce(void);
    void        setName(std::string str);
    std::string	getName(void);

private:

    std::string _name;

};

Zombie  *zombieHorde(int N, std::string name);

#endif