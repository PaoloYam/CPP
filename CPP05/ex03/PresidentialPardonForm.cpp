#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", false, 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) {
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == true)
	{
		if (executor.getGrade() <= this->getGradeExec())	
		{
			std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::NotSigned();
}

PresidentialPardonForm &      PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	Form::operator=(rhs);
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}