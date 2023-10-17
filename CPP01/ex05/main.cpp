/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/22 16:53:20 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(void) {
	std::string	str;
	Harl		harl;
	
	while (str != "EXIT")
	{
		std::cout << "What do you want to complain about ? ";
		std::getline(std::cin, str);	
		harl.complain(str);
	}
}	