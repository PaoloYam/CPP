/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:45:27 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/23 17:13:04 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input)
{
    (void)input;
    readcsv();
    execute(input);
}

void    BitcoinExchange::execute(std::string input)
{
    std::ifstream   file(input);
    std::string     line;

    if (!file.is_open())
        _error = true;
    while (std::getline(file, line))
    {
        std::stringstream   ss(line);
        std::string         key;
        std::string         value;

        ss >> key;
        ss >> value;
        ss >> value;
        std::cout << "key " << key << std::endl;
        std::cout << "value " << value << std::endl;

    }
    file.close();
}

void    BitcoinExchange::readcsv(void) {
    std::ifstream   file("./data.csv");
    std::string     line;
    
    std::cout << "reading data..." << std::endl;
    int count = 0;
    while (file)
    {
        char    key[10000];
        char    value[10000];

        file.getline(key, 100000, ',');
        file.getline(value, 10000, '\n');

        if (key[0] && value[0])
        {
            _data.insert(std::make_pair(key, value));
            count++;
        }
    } 
    file.close();
    std::cout << "Your csv file contain " << count <<  " rows" << std::endl;
//  std::map<std::string, std::string>::iterator iter;
//     for (iter = _data.begin(); iter != _data.end(); iter++) 
//         std::cout << "key : " << iter->first << " value : " << iter->second << std::endl;
    }

