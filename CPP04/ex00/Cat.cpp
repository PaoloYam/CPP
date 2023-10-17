#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Un Cat vient d'apparaitre" << std::endl;
}

Cat::Cat(Cat const & rhs)
{
	*this = rhs;
	std::cout << "Une copie du cat vient d'etre faite" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Aurevoir le miaou" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "the " << this->_type << " makes miaow miaow" << std::endl;
}

Cat &	Cat::operator=(Cat const & rhs) {
	Animal::operator=(rhs);
	return *this;
}