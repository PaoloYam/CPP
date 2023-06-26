/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:30:52 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/23 16:22:31 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    (void)argv;
    if (argc != 2)
    {
        std::cout << "Not the right number of argument" << std::endl;
        return (0);
    }

    BitcoinExchange btc("lala");

    return (0);
}