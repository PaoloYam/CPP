/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:45:27 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/28 13:34:50 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input)
{
    readcsv();
    execute(input);
}

int     BitcoinExchange::verifyData(std::string key)
{
    if (key == "date")
        return (0);
    
    std::stringstream   ss(key);
    std::tm             date = {};   

    ss >> std::get_time(&date, "%Y-%m-%d");
    if (ss.fail())
        return (0);
    // std::cout << "This data is good and added " << "day : " << date.tm_mday << " month : " << date.tm_mon << " year :" << date.tm_year << std::endl;
    return (1);
}

int    BitcoinExchange::verifyValue(float value)
{
    if (value > 1000)
        {
            std::cerr << "Error: too large a number" << std::endl;
            return (0);
        }
    else if (value < 0)
        {
             std::cerr << "Error: not a positive number" << std::endl;
             return (0);
        }
    else
        return (1);
}

std::string BitcoinExchange::findCorrectDate(std::string key)
{
    if (_data.find(key) != _data.end())
        return (key);
    std::map<std::string, std::string>::iterator    it;
    // std::cout << "not found : " << key << std::endl;
    it = _data.lower_bound(key);
    // if (it == _data.end())
    it--;
    // std::cout << " closest date : " << it->first << std::endl;
    return (it->first);
}

void    BitcoinExchange::usevalue(std::string key, std::string value)
{
    if (!verifyData(key))
    {
        std::cerr << "Error: bad input => " << key << std::endl;
        return;
    }

    std::string date = findCorrectDate(key);
    (void)value;
    
    float   val;
    float   rate;
    
    try {
        val = std::stof(value);
        rate = std::stof(_data[date]);
    }
     catch (const std::exception& e) {
         std::cout << "Problem of conversion " << e.what() << std::endl;
    } 

    if (verifyValue(val * rate))
        std::cout << key << " => " << value << " = " << val * rate << std::endl; 
    // std::cout << "key " << key << std::endl;
    // std::cout << "value " << value << std::endl;
}

void    BitcoinExchange::execute(std::string input)
{
    std::ifstream   file(input);
    std::string     line;

    if (!file.is_open())
        std::cerr << "Problem" << std::endl;
    while (std::getline(file, line))
    {
        std::stringstream   ss(line);
        std::string         key;
        std::string         value;

        ss >> key;
        ss >> value;
        ss >> value;
        usevalue(key, value);    
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
    // std::map<std::string, std::string>::iterator iter;
    // for (iter = _data.begin(); iter != _data.end(); iter++) 
    // std::cout << "key : " << iter->first << " value : " << iter->second << std::endl;
}

