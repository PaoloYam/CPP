/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:26:37 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 14:26:44 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T>
void	printArray(T *array, int size)
{
	int t;
	std::cout << "{ ";
	for (int i = 0; i < size - 1; i++)
	{
		std::cout << array[i] << ", ";
		t = i;
	}
	t++;
	std::cout << array[t];
	std::cout << " }\n";
}

template <typename T>
void	iter(T *array, int size, void (*func) (T &array))
{
	for (int i = 0; i < size; i++)
		func(array[i]);
	printArray<T>(array, size);
}

template <typename T>
void	ChangeValue(T &value)
{
	value = 'a';
}