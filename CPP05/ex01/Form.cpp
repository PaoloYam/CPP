#include "Form.hpp"

Form::Form(): _name("Random"), _gradeSigned(150), _gradeExec(150)
{
	std::cout << "Form constructor by default is being called" << std::endl;
}

Form::Form(std::string name, bool sign, int gradesign, int gradeexec): _name(name), _gradeSigned(gradesign), _gradeExec(gradeexec)
{
	if (gradesign > 150 || gradeexec > 150)
	{
		throw(Form::GradeTooLowException());
	}
	else if (gradesign < 1 || gradeexec < 1)
	{
		throw(Form::GradeTooHighException());
	}
	else
	{
		this->_signed = sign; 
	}
	std::cout << "Form " << this->_name << " has been created" << std::endl;
}

Form::Form(Form const & rhs) : _gradeSigned(rhs._gradeSigned), _gradeExec(rhs._gradeExec)  {
	*this = rhs;
	std::cout << "A copie of " << this->_name << " has been created" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " destructor has been called" << std::endl;
}

 std::string	Form::getName() const {
	return this->_name;
 }

bool        	Form::getSigned() const {
	return this->_signed;
}

int         	Form::getGradeSigned() const {
	return this->_gradeSigned;
}

int         	Form::getGradeExec() const {
	return this->_gradeExec;
}

const char		*Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char		*Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

void      Form::beSigned(Bureaucrat const & rhs) {
	if (this->_gradeSigned > rhs.getGrade())
	{
		this->_signed = true;
	}
	else
	{
		throw(Form::GradeTooLowException());
	}
}

Form &    Form::operator=(Form const & rhs) {
	if (this != &rhs)
	{
		//this->_name = rhs._name;   Pas possible car le nom est const donc on ne peut pas lui assigner de valeur 
		this->_signed = rhs._signed;	
	}
	return *this;
}

std::ostream & operator<<(std::ostream &o, Form const &rhs) {
	std::cout << rhs.getName() << " Form is " << (rhs.getSigned() == 0 ? "not signed" : "signed") << ". Require grade to sign: " << 
	rhs.getGradeSigned()	<< " and grade to execute: " << rhs.getGradeExec() << std::endl;
	return o;
}