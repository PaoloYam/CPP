#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor by default is being called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	else if (grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else
	{
		this->_grade = grade;
	}
	std::cout << "Bureaucrat " << this->_name << " has been created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) {
	*this = rhs;
	std::cout << "A copie of " << this->_name << " has been created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->_name << " destructor is being called" << std::endl;
}

std::string      Bureaucrat::getName() const {
	return this->_name;
}

int	             Bureaucrat::getGrade() const {
	return this->_grade;
}

void              Bureaucrat::promote(int i) {
	if ((this->_grade - i) < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade -= i;
}

void              Bureaucrat::demote(int i) {
	if ((this->_grade + i) > 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade += i;
}

const char		*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char		*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

Bureaucrat &    Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this != &rhs)
	{
		//this->_name = rhs._name;   Pas possible car le nom est const donc on ne peut pas lui assigner de valeur 
		this->_grade = rhs._grade;
	}
	return *this;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs) {
	std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl; 
	return o;
}