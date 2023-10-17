#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Defaut constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = i << this->_bits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(f * (1 << this->_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

 Fixed::Fixed(Fixed const & copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int	Fixed::getRawBits(void) const {
	return this->_raw;
}

void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}

float	Fixed::toFloat(void) const {
	float f = (1 << this->_bits);
	return (this->_raw / f);
}

int		Fixed::toInt(void) const {
	return (this->_raw >> this->_bits);
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return *this;
}

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}