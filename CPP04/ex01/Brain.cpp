#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain being constructed" << std::endl;
}

Brain::Brain(Brain const & rhs) {
	*this = rhs;
	std::cout << "Brain being copied" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain being destroyed" << std::endl;
}

Brain &     Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}