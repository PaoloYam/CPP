#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Un animal a vu le jour" << std::endl;
}

Animal::Animal(std::string n)
{
	this->_type = n;
	std::cout << "Un animal de type " << this->_type << " a vu le jour" << std::endl;
}

Animal::Animal(Animal const & rhs)
{
	*this = rhs;
	std::cout << "Une animal a ete copie" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Un animal nous a quitte :(" << std::endl;
}

std::string		Animal::getType(void) const
{
	return this->_type;
}

void		Animal::makeSound(void) const
{
	std::cout << "Inaudible sound" << std::endl;
}

Animal &      Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;	
	return *this;
}