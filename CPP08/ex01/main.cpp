/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:41:28 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/22 17:05:29 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
# include <iostream>
# include <algorithm>
# include <vector>
# include <utility>

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.ShortestSpan() << std::endl;
    std::cout << sp.LongestSpan() << std::endl;

    try {
    Span ap = Span(1);
    ap.addNumber(4);
    // std::cout << ap.ShortestSpan() << std::endl;
    // std::cout << ap.LongestSpan() << std::endl; 
    }
    catch (const std::exception& e) {
         std::cout << "An exception occurred: " << e.what() << std::endl;
    }   
    
    try
    {
        std::vector<int>    test(1000, 1);
        Span lp = Span(1003);

        lp.insert(test.begin(), test.end());
        lp.addNumber(3);
        lp.addNumber(4);
        lp.addNumber(4);
        lp.addNumber(5);
    }

    catch (const std::exception& e) {
         std::cout << "An exception occurred: " << e.what() << std::endl;
    } 

 

}