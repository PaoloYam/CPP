#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {


}

HumanB::~HumanB()
{
	std::cout << this->_name <<  " is gone" << std::endl;
}


void    HumanB::attack(void) {
	std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}