#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string const & n);
    FragTrap(FragTrap const & rhs);
    ~FragTrap();

    FragTrap &      operator=(FragTrap const & rhs);
    void            attack(const std::string & target);
    void            highFivesGuys(void);

private:

};

#endif