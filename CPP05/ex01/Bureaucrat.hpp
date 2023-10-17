class Bureaucrat;
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const & rhs);
    ~Bureaucrat();

    Bureaucrat &      operator=(Bureaucrat const & rhs);
    std::string       getName() const;
    int               getGrade() const;
    void              promote(int i);
    void              demote(int i);
    void              signForm(Form & rhs);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what () const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
   
private:
    std::string const   _name;
    int                 _grade;

};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif