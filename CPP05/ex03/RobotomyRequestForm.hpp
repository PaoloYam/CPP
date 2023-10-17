class RobotmyRequestForm;
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <time.h>

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm();
     RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & rhs);
    ~RobotomyRequestForm();

    virtual void	execute(Bureaucrat const & executor) const;

    RobotomyRequestForm &      operator=(RobotomyRequestForm const & rhs);

private:
    std::string     _target;

};

#endif