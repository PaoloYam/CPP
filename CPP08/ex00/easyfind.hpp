/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:43:06 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/22 14:53:23 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <list>

template <typename T> 
void    easyfind(T listA, int value)
{
    typename T::iterator    it;

    it = find(listA.begin(), listA.end(), value);
    if (it != listA.end())
        std::cout << "value has been found: " << *it << std::endl;
    else
        throw std::exception();
    return;
}

#endif