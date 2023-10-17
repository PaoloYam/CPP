/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:29 by pyammoun          #+#    #+#             */
/*   Updated: 2023/03/15 14:21:26 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	try
	{
		Bureaucrat a("kevin", 31);
		Bureaucrat v("Markus", 100);
		Form	   b("contrat", false, 30, 50);
		Form		c("contrex", false, 130, 20);

		a.signForm(b);
		a.signForm(c);
		std::cout << b; 
		std::cout << c;
		
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}