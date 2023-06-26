/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:46:59 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 13:55:41 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void    swap (T & x, T & y)
{
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
    return;
}

template <typename T>
T   const & max(T const & x, T const & y)
{
    if (x == y)
        return (y);
    else   
        return ((x > y) ? x : y);
}

template <typename T>
T   const &min(T const & x, T const & y)
{
    if (x == y)
        return (y);
    else
        return ((x < y) ? x : y);
}