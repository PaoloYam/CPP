/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:05:50 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/22 14:02:07 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie*	Zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
		Zombies[i].setName(name);
	}
	return (Zombies);	
}