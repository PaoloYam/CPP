class PresidentialPardonForm;
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target); 
    PresidentialPardonForm(PresidentialPardonForm const & rhs);
    ~PresidentialPardonForm();

    virtual void    execute(Bureaucrat const & executor) const;

    PresidentialPardonForm &      operator=(PresidentialPardonForm const & rhs);

private:
    std::string     _target;

};

#endif