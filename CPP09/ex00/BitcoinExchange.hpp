/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:32:03 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/28 13:32:55 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <map>
#include <ctime>


class BitcoinExchange {
    
    public :
        
        BitcoinExchange(std::string input);

        void        readcsv(void);
        void        execute(std::string input);
        void        usevalue(std::string key, std::string value);
        int         verifyData(std::string key);
        std::string findCorrectDate(std::string key);
        int         verifyValue(float value);

    private :

        std::map<std::string, std::string>  _data;

        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const & cpy);
        BitcoinExchange &   operator=(BitcoinExchange const & rhs);

};
#endif