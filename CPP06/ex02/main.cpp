/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:05:56 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 11:07:49 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp" 

int main()
{
	srand(time(NULL));
	Base *ptrBase;
	ptrBase = generate();
	Base &refBase = *ptrBase;
	std::cout << "par pointeur : \n";
	identify(ptrBase);
	std::cout << "par ref : \n";
	identify(refBase);
	delete ptrBase;
}