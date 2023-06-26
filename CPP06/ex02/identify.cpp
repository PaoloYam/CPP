/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:05:09 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 11:42:16 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    *generate(void)
{
    int random = std::rand() % 3;
    Base *ret;
    
    std::cout << random << std::endl;
    if (random == 0)
        return (ret = new A());
    if (random == 1)
        return (ret = new B());
    if (random == 2)
        return (ret = new C());
    return (NULL);
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "It's an A type \n";
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "It's not an A type " <<  e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "It's an B type \n";
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "It's not an B type " <<  e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "It's an C type \n";
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "It's not an C type " <<  e.what() << '\n';
	}
	return ;
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	if (a == NULL)
		std::cout << "It's not a A type\n";
	else
		std::cout << "It's an A type\n";

	B *b = dynamic_cast<B *>(p);
	if (b == NULL)
		std::cout << "It's not a B type\n";
	else
		std::cout << "It's an B type\n";
	C *c = dynamic_cast<C *>(p);
	if (c == NULL)
		std::cout << "It's not a C type\n";
	else
		std::cout << "It's an C type\n";
	return ;
}