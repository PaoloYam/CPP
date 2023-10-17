#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _weapon(type) {
	return;	
}

HumanA::~HumanA() {
	std::cout << this->_name <<  " is gone" << std::endl;
	return;
}

void    HumanA::attack(void) {
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
	return;
}