/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:14:17 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 14:17:27 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int		intArray[] = {1, 2, 3, 4};
	char	charArray[] = {'a', 'b', 'c', 'd'};
	float	floatArray[] = {12.0, 45.09, 23.09, 56.7};
	double	doubleArray[] = {324.98, 342.3, 76.9, 7536.90};

	std::cout << "\nint : \n";
	printArray(intArray, 4);
	iter<int>(intArray, 4, ChangeValue);
	std::cout << "\nchar : \n";
	printArray(charArray, 4);
	iter<char>(charArray, 4, ChangeValue);
	std::cout << "\nfloat : \n";
	printArray(floatArray, 4);
	iter<float>(floatArray, 4, ChangeValue);
	std::cout << "\ndouble : \n";
	printArray(doubleArray, 4);
	iter<double>(doubleArray, 4, ChangeValue);
}