#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Un WrongAnimal a vu le jour" << std::endl;
}

WrongAnimal::WrongAnimal(std::string n)
{
	this->_type = n;
	std::cout << "Un WrongAnimal de type " << this->_type << " a vu le jour" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
	*this = rhs;
	std::cout << "Une WrongAnimal a ete copie" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Un WrongAnimal nous a quitte :(" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return this->_type;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Inaudible sound" << std::endl;
}

WrongAnimal &      WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs._type;	
	return *this;
}