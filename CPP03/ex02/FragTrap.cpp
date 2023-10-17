#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "Vous avez cree un Frap perdu" << std::endl;
}

FragTrap::FragTrap(std::string const & n) : ClapTrap(n)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << this->_name << " a ete cree" << std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs) : ClapTrap(rhs)
{
	*this = rhs;
	std::cout << "FragTrap " << this->_name << " has been created as a copy" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FrapTrap " << this->_name << " nous a quitte" << std::endl;
}

void	FragTrap::attack(const std::string & target) {
	if (this->_energy > 0)
	{	
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " 
			<< this->_attack << " points of damage !" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " n'a pas assez d'energy pour lancer une attaque" << std::endl;	
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hi guys, I'm " << this->_name << ". Please High Five Me :)" << std::endl;
}

FragTrap &      FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}