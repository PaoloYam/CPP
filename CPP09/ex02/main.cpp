/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:57:53 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/28 11:29:33 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{

	std::list<int>		lst;
	std::vector<int>	vctr;
	int					number;
	std::string			string;

	try
	{
		if (argc < 3)
			throw (PmergeMe::wrongArguments());

		for (int i = 1; i < argc; ++i)
		{
			number = std::atoi(argv[i]);
			string = argv[i];
			if (std::find(lst.begin(), lst.end(), number) != lst.end()) 
				continue ;
			if (std::find(vctr.begin(), vctr.end(), number) != vctr.end())
				continue ;
			addNumber(number, lst, string);
			addNumber(number, vctr, string);
		}

		PmergeMe	algo;

		algo.sortLst(lst);
		algo.sortVctr(vctr);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

