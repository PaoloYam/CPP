/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:48:55 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 10:56:08 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "serialize.hpp"

int main(void)
{
	Data		testData;
	uintptr_t	raw;
	Data		*newData;

	testData.i = 22;
	testData.c = 'a';

	std::cout << "test data de base: \n";
	std::cout << testData;

	std::cout << "data serialization\n";
	raw = serialize(&testData);

	std::cout << "raw adresse de data " << &raw << "\n";
	newData = deserialize(raw);

    std::cout << std::endl; 
    std::cout << "retour a la normal\n";
	std::cout << *newData;
	return (0);
}