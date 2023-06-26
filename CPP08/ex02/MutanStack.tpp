/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:50:26 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/23 14:09:03 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

template <typename T>
MutanStack<T>::MutanStack(void) {
    std::cout << "+ Default MutanStack constructor called" << std::endl;
    return;
}

template <typename T>
MutanStack<T>::MutanStack(MutanStack const & rhs) {
    *this = rhs;
    std::cout << "+ Copy MutanStack constructor called" << std::endl;
    return;
}

template <typename T>
MutanStack<T> & MutanStack<T>::operator=(MutanStack const & rhs) {
	this->c = rhs.c;
	std::cout << "+ Assignation MutantStack operator called" << std::endl;
	return (*this);
}

template <typename T>
MutanStack<T>::~MutanStack(void) {

	std::cout << "- Dafault MutantStack destructor called" << std::endl;
	return ;
}

template <typename T>
typename std::stack<T>::container_type::iterator MutanStack<T>::begin(void) {

	return (this->c.begin());
}

template <typename T>
typename MutanStack<T>::iterator	MutanStack<T>::end(void) {

	return (this->c.end());
}