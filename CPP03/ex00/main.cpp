/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/28 13:53:27 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	a("Jerome");
	ClapTrap	b("Keanu");
	ClapTrap	c("Tanguy");	
	ClapTrap	d;
	
	c.attack("Gojo");
	c.takeDamage(6);
	c.beRepaired(6);
	c.takeDamage(5);
	c.attack("Gojo");
	c.beRepaired(3);
	c.takeDamage(9);

	a.attack("Charles");
	a.attack("Charles");
	a.attack("Charles");
	a.attack("Charles");
	a.attack("Charles");
	a.attack("Charles");
	a.beRepaired(1);
	a.beRepaired(1);	
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);

	b.takeDamage(1);
	b.takeDamage(1);
	b.takeDamage(1);
	b.takeDamage(1);
	b.takeDamage(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.attack("Sukuna");
	b.attack("Sukuna");
	b.attack("Sukuna");
	b.attack("Sukuna");
	b.attack("Sukuna");
	b.attack("Sukuna");
	
	return (0);
}	