/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/22 14:03:07 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "Zombie.hpp"

int	main(void)
{
	int	i = 5;
	
	Zombie*		Zombies; 
	
	Zombies = zombieHorde(i, "enrik");
	for (int c = 0; c < i; c++)
		Zombies[c].annouce();

	delete [] Zombies;
	return (0);
}