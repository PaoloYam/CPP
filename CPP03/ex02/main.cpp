/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/08 11:24:28 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ScavTrap	a("Keke");	
	ScavTrap	b("Kim");
	ScavTrap	cpy(b);
	ClapTrap	c("Maxime");	
	ClapTrap	copy(a);
	FragTrap	d("Keanu");
	

	a.guardGate();
	a.attack("bolu");
	copy.attack("Mathys");
	d.highFivesGuys();
	d.attack("abian");

	return (0);
}	