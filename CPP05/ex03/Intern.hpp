class Intern;
#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp" 
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const & rhs);
    ~Intern();
    
    typedef struct {
        std::string key;
        Form        *(Intern::*func)(std::string);
    } request;

    Form          *makeForm(std::string forname, std::string target);

    Intern &      operator=(Intern const & rhs);

private:
    request _request[3];
    Form	*_makeShrubbery(std::string target);
	Form	*_makeRobotomy(std::string target);
	Form	*_makePresidential(std::string target);

};

#endif