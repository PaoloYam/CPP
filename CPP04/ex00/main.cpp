/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:29 by pyammoun          #+#    #+#             */
/*   Updated: 2023/03/01 15:31:42 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Dog	a;
	Cat b;
	Animal c;
	WrongAnimal d;
	WrongCat	e;

	a.makeSound();
	b.makeSound();
	
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "test2" << std::endl;

	const WrongAnimal* lak = new WrongAnimal();
	const WrongAnimal* lok = new WrongCat();

	std::cout << lak->getType() << " " << std::endl;
	std::cout << lok->getType() << " " << std::endl;

	lak->makeSound();
	lak->makeSound();

	return (0);
}