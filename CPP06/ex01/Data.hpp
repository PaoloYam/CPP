/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:48:35 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 10:48:38 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream> 


class Data
{
    public:
        Data(void);
        Data(Data const &cpy);
        Data &operator=(Data const &rhs);
       ~Data(void);

    int     i;
    char    c;

};

std::ostream & operator<<(std::ostream &o, Data const &rhs);

#endif