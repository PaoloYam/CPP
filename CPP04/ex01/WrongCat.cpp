#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Un WrongCat vient d'apparaitre" << std::endl;
}

WrongCat::WrongCat(WrongCat const & rhs)
{
	*this = rhs;
}

WrongCat::~WrongCat()
{
	std::cout << "Aurevoir le toutou" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "the " << this->_type << " makes miaow miaow" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs) {
	WrongAnimal::operator=(rhs);
	return *this;
}