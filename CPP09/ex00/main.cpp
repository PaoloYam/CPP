/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:30:52 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/27 19:03:41 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (0);
    }
    std::string input = argv[1];
    BitcoinExchange btc(input);

    return (0);
}