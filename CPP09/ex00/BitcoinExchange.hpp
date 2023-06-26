/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:32:03 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/23 16:59:20 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <map>


class BitcoinExchange {
    
    public :
        
        BitcoinExchange(std::string input);

        void    readcsv(void);
        void    execute(std::string input);

    private :

        std::map<std::string, std::string>  _data;
        bool                                _error;

        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const & cpy);
        BitcoinExchange &   operator=(BitcoinExchange const & rhs);

};
#endif