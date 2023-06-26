/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:53:02 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/23 14:09:40 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutanStack: public std::stack<T> {
    
    public :

        MutanStack(void);
        MutanStack(MutanStack const & cpy);
        MutanStack & operator=(MutanStack const & rhs);
        ~MutanStack(void);

        typedef typename std::stack<T>::container_type::iterator	iterator;
        typename std::stack<T>::container_type::iterator	        begin(void);
	    iterator	                                                end(void);

};

#include "MutanStack.tpp"

#endif