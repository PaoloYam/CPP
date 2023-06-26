/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:23:31 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/22 14:15:47 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
    Array<int>nombre(5);
    try {
        nombre[6];
    }
     catch (const std::exception& e) {
        std::cout << "An exception occurred: " << e.what() << std::endl;
    }   
    // Array<float> numbers(MAX_VAL);
    // float* mirror = new float[MAX_VAL];
    // srand(time(NULL));
    // for (unsigned int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<float> tmp = numbers;
    //     Array<float> test(tmp);
	// 	test[1] = 90;
	// 	if (test[1] == numbers[1])
	// 	{
	// 		std::cerr << "Pas profond" << std::endl;
	// 		return 1;
	// 	}
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "\n\n\n\n\n🤬🤬🤬🤬ARE YOU TRYING TO MAKE ME SEG ??🤬🤬🤬🤬🤬 / " << e.what() << "\n\n\n\n";
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "\n\n\n\n\n🤬🤬🤬🤬ARE YOU TRYING TO MAKE ME SEG ??🤬🤬🤬🤬🤬 / " << e.what() << "\n\n\n\n";
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;
    return 0;
}