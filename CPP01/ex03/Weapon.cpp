#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon()
{
	std::cout << "Weapon is gone" << std::endl;
}

std::string const & Weapon::getType() {
	return this->_type;
}

void	Weapon::setType(std::string att) {
	this->_type = att;
	return;
}