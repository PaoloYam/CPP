#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
	this->_request[0].key = "robotomy request";
	this->_request[0].func = &Intern::_makeRobotomy;
	this->_request[1].key = "shruberry request";
	this->_request[1].func = &Intern::_makeShrubbery;
	this->_request[2].key =	"presidential request";
	this->_request[2].func = &Intern::_makePresidential;
}

Intern::Intern(Intern const & rhs){
	std::cout << "Intern copy has been made" << std::endl;
	*this = rhs;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Form	*Intern::makeForm(std::string formname, std::string target) {
	for (int i = 0; i < 3; i++)
	{
		if (this->_request[i].key == formname)
		{
			std::cout << "Intern creates " << formname << " with target " << target << std::endl;
			return((this->*_request[i].func)(target));
		}
	}
	std::cout << "This form doesn't exist" << std::endl;
	return NULL;

}

Form	*Intern::_makeShrubbery(std::string target)
{
	ShrubberyCreationForm	*Schruberry = new ShrubberyCreationForm(target); 
	return (Schruberry);
}

Form	*Intern::_makeRobotomy(std::string target)
{
	RobotomyRequestForm		*Robotomy = new RobotomyRequestForm(target);
	return (Robotomy);
}

Form	*Intern::_makePresidential(std::string target) {
	PresidentialPardonForm	*Presidential = new PresidentialPardonForm(target);
	return (Presidential);
}

Intern &      Intern::operator=(Intern const & rhs) {
	(void) rhs;
	return *this;
}