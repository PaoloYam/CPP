#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
	this->_hit = 100;
	this->_attack = 20;
	this->_energy = 50;
	std::cout << "Vous avez cree un Scav perdu" << std::endl;
}

ScavTrap::ScavTrap(std::string const & n) : ClapTrap(n)
{
	this->_hit = 100;
	this->_attack = 20;
	this->_energy = 50;
	std::cout << "Le Scav " << this->_name << " a ete cree" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) : ClapTrap(rhs)
{
	*this = rhs;
	std::cout << "ScavTrap " << this->_name << " has been created as a copy" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Le Scav " << this->_name << " est mort" << std::endl;
}

void	ScavTrap::attack(const std::string & target) {
	if (this->_energy > 0)
	{	
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " 
			<< this->_attack << " points of damage !" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " n'a pas assez d'energy pour lancer une attaque" << std::endl;	
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered Guard mode" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}