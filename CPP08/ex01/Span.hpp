/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:05:28 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/22 16:53:46 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <utility>

class Span
{
    public :

        Span(void);
        Span(unsigned int size);
        Span(Span const & cpy);
        Span &operator=(Span const & rhs);
        ~Span(void);

        void            addNumber(int);
        unsigned int    ShortestSpan();
        unsigned int    LongestSpan();
        void            insert(std::vector<int>::iterator first, std::vector<int>::iterator last);
    
    private:

        std::vector<int>    _lst;
        unsigned int		_size;
};
#endif