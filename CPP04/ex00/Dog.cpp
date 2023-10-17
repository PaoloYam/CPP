#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Un Dog vient d'apparaitre" << std::endl;
}

Dog::Dog(Dog const & rhs)
{
	*this = rhs;
	std::cout << "Une copie du dogo vient d'etre faite" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Aurevoir le toutou" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "the " << this->_type << " makes woof woof" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs) {
	Animal::operator=(rhs);
	return *this;
}