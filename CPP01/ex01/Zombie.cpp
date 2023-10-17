#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "Bye Bye " << this->_name << std::endl;
}


void	Zombie::annouce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;

}

void	Zombie::setName(std::string str) {
	this->_name = str;
}

std::string	Zombie::getName(void) {
	return this->_name;
}