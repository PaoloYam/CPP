/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:29 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/08 11:12:50 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{	
	{
		Animal*	tab[10];

		for (int i = 0; i < 5; i++)
			tab[i] = new Dog();
		for (int i = 5; i < 10; i++)
			tab[i] = new Cat();

		for (int i = 0; i < 10; i++)
		{
			std::cout << i << std::endl;
			delete tab[i];
		}	
	}
	return (0);
}