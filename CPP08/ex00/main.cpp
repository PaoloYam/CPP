/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:48:36 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/22 14:55:44 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		std::list<int>	lst;

		lst.push_back(44);
		lst.push_back(55);
		lst.push_back(66);
		lst.push_back(77);

        std::cout << "Int list test" << std::endl;
		try {
			easyfind(lst, 44);
			easyfind(lst, 66);
			easyfind(lst, 77);
			easyfind(lst, 88);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Element is not on the list" << std::endl;
		}
	}

	std::vector<int>	lst;

	lst.push_back(44);
	lst.push_back(55);
	lst.push_back(66);
	lst.push_back(77);

	std::cout << "Int vector test" << std::endl;
	try {
		easyfind(lst, 44);
		easyfind(lst, 55);
		easyfind(lst, 66);
		easyfind(lst, 88);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Element not found in list" << std::endl;
	}

	return 0;
}