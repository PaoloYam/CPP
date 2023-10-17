/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:29 by pyammoun          #+#    #+#             */
/*   Updated: 2023/03/23 17:30:13 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
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
	srand (time(NULL));
	try{
		Bureaucrat a("jerome", 1);	

		RobotomyRequestForm c("melvin");
		PresidentialPardonForm d("markus");
		ShrubberyCreationForm e("piu");

		c.beSigned(a);
		d.beSigned(a);
		e.beSigned(a);
		c.execute(a);
		d.execute(a);
		a.executeForm(e);
		
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}	
	return (0);
}