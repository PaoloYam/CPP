#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Un Cat vient d'apparaitre" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const & rhs)
{
	*this = rhs;
	std::cout << "Une cat est copie" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Aurevoir le miaous" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "the " << this->_type << " makes miaow miaow" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {
	Animal::operator=(rhs);
	this->_brain = rhs._brain;
	return *this;
}