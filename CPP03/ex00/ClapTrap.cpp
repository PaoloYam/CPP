#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack(0) 
{
	std::cout << "Vous avez creez une ame perdue" << std::endl;
}

ClapTrap::ClapTrap(std::string const & n) : _name(n), _hit(10), _energy(10), _attack(0) 
{
	std::cout << "Le champion " << this->_name << " a été invoqué" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Le champion " << this->_name << " nous a quitté" << std::endl;
}

void	ClapTrap::attack(const std::string & target) {
	if (this->_energy > 0)
	{	
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
			<< this->_attack << " points of damage !" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " n'a pas assez d'energy pour lancer une attaque" << std::endl;
	
}

void    ClapTrap::takeDamage(unsigned int amount) {
	this->_hit -= amount;
	if (this->_hit > 0 && this->_energy > 0)
		std::cout << "ClapTrap " << this->_name << " prend " << amount << " en damages !" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " meurt apres les damages recus :(" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy > 0 && this->_hit != 10)
	{
		std::cout << "ClapTrap " << this->_name << " se heal de " << amount << " HP" << std::endl;
		this->_energy -= 1;
		this->_hit += amount;
	}
	else if (this->_hit == 10)
		std::cout << "ClapTrap " << this->_name << " a deja le max de points de vie, Repair ne peut etre lancer" << std::endl;	
	else
		std::cout << "ClapTrap " << this->_name << " n'a pas assez d'energy pour lancer Repair" << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return this->_name;
}

int			ClapTrap::getHit(void) const {
	return this->_hit;
}

int         ClapTrap::getEnergy(void) const {
	return this->_energy;
}

int         ClapTrap::getAttack(void) const {
	return this->_attack;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hit = rhs.getHit();
		this->_attack = rhs.getAttack();
		this->_energy = rhs.getEnergy();
	}	
	return *this;
}
