/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:29 by pyammoun          #+#    #+#             */
/*   Updated: 2023/03/23 16:54:24 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{	
	try
	{
		Bureaucrat	a("jerome", 22);
		Bureaucrat	b("kevin", 149);
		Bureaucrat	c("mark", 1);
		
		std::cout << a.getName() << std::endl;
		c.demote(4);
		std::cout << c.getGrade() << std::endl;
		std::cout << b;
		c.promote(4);
		c.promote(1);
		
	}
	
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}