class Form;
#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
public:
    Form();
    Form(std::string name, bool sign, int gradesign, int gradeexec);
    Form(Form const & rhs);
    ~Form();

    Form &      operator=(Form const & rhs);
    std::string getName() const;
    bool        getSigned() const;
    int         getGradeSigned() const;
    int         getGradeExec() const;
    void        beSigned(Bureaucrat const & rhs);

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
    bool                _signed;
    int const           _gradeSigned;
    int const           _gradeExec;
};

std::ostream & operator<<(std::ostream &o, Form const &rhs);

#endif