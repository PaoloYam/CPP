/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:31:08 by pyammoun          #+#    #+#             */
/*   Updated: 2023/01/23 17:26:37 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void)
{
	std::string	prompt;
	PhoneBook	Book;
	
	std::cout << "Hi, Weclome to your phonebook, how can i help you ?" << std::endl;
	std::cout << "prompt: ";
	while (std::getline (std::cin, prompt))
	{
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
		if (prompt == "ADD")
			Book.add();
		else if (prompt == "SEARCH")
			Book.search();
		else if (prompt == "EXIT")
			return (0);
		else
			std::cout << "Try again" << std::endl;
			std::cout << "prompt: ";
	}
	return (0);
}