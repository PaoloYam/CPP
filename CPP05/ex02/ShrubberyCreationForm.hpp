class ShrubberyCreationForm;
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form { 

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & rhs);
    ~ShrubberyCreationForm();

    virtual void	execute(Bureaucrat const & executor) const;

    ShrubberyCreationForm &      operator=(ShrubberyCreationForm const & rhs);

private:
    std::string     _target;

};

#endif