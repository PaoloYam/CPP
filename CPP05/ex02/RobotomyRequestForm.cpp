#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot", false, 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs)
{
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == true)
	{
		if (executor.getGrade() <= this->getGradeExec())	
		{
			std::cout << "Brrrrr Brrrrrr Brrrrr" << std::endl;
			if ((rand() % 2 + 1) == 2)
				std::cout << this->_target << " has been robotized" << std::endl;
			else
				std::cout << "Operation to robotized " << this->_target << " failed" << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::NotSigned();
}

 RobotomyRequestForm &      RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	Form::operator=(rhs);
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
 }