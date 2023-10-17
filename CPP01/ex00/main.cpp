/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/22 13:36:07 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	Zombie	a;
	Zombie*	b;

	a.setName("Keke");
	a.annouce();
	b = newZombie("Markus");
	randomChump("Mikael");

	delete(b);
	return (0);
}
