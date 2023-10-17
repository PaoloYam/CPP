/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:24:49 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/27 20:32:59 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Wrong number of argument" << std::endl;
	else
	{
		std::string	value = argv[1];
		RPN	valeur(value);
	}
}