#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Un Dog vient d'apparaitre" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const & rhs)
{
	*this = rhs;
	std::cout << "Un dogo est copie" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Aurevoir le toutou" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "the " << this->_type << " makes woof woof" << std::endl;
}

Dog &	Dog::operator=(Dog const & rhs) {
	Animal::operator=(rhs);
	this->_brain = rhs._brain;
	return *this;
}