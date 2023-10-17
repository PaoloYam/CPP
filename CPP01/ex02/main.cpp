/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/22 14:10:17 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{	
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str; 

	std::cout << "Adresse str: " << &str << std::endl;
	std::cout << "Adresse stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stringREF: " << &(stringREF) << std::endl;
	
	std::cout << "Valeur str: " << str << std::endl;
	std::cout << "Valeur stringPTR: " << *(stringPTR) << std::endl;
	std::cout << "Valeur stringREF: " << stringREF << std::endl; 
}