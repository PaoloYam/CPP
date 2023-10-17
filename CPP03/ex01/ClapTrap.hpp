#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(std::string const & n);
    ClapTrap(ClapTrap const & rhs);
    ~ClapTrap();

    ClapTrap &      operator=(ClapTrap const & rhs);
    
    void    attack(const std::string & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string  getName(void) const;
    int          getHit(void) const;
    int          getEnergy(void) const;
    int          getAttack(void) const;

protected:
    std::string _name;
    int         _hit;
    int         _energy;
    int         _attack;
};

#endif