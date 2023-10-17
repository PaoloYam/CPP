/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:29 by pyammoun          #+#    #+#             */
/*   Updated: 2023/03/23 18:16:48 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <time.h>

int	main(void)
{	
	/*try
	{
		Bureaucrat	a("jerome", 22);
		Bureaucrat	b("kevin", 155);
		Bureaucrat	c("mark", 1);
		
		std::cout << a.getName() << std::endl;
		c.demote(4);
		std::cout << c.getGrade() << std::endl;
		c.promote(4);
		c.promote(1);
		
	}
	
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}*/
	Intern		a;
	Intern		b;
	Bureaucrat	c;
	Form		*v;

	
	v = a.makeForm("shruberry request", "salut");
	b.makeForm("robotomy request", "vroum");
	v->beSigned(c);
	c.executeForm(*v);
		
	return (0);
}