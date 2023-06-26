/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:04:55 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/22 16:54:37 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0)
{
    std::cout << "A default empty Span has been created" << std::endl;
    return;
}

Span::Span(unsigned int size) : _size(size)
{
    std::cout << "A Span with the size " << this->_size << " has been created" << std::endl;
    return;
}

Span::Span(Span const & cpy)
{
    std::cout << "A copy Span has been created" << std::endl;
    *this=cpy;
    return;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        _size = rhs._size;
        _lst = rhs._lst;
    }
    return (*this);
}

Span::~Span(void)
{
    std::cout << "A span of size " << _size << " has been deleted" << std::endl;
    return;
}

void    Span::addNumber(int value)
{
    if (_lst.size() < _size)
        _lst.push_back(value);
    else 
        throw std::exception();
    return;
}

unsigned int    Span::ShortestSpan()
{
    if (_lst.size() < 2)
        throw std::exception();
    std::sort(_lst.begin(), _lst.end());
    unsigned int tmp;
    tmp = _lst[1] - _lst[0]; 
    for (unsigned int i = 1; i < _lst.size(); i++)
    {
        unsigned int distance = _lst[i] - _lst[i - 1];
        if (distance < tmp)
            tmp = distance;
    }
    return (tmp);
}

unsigned int    Span::LongestSpan()
{
    if (_lst.size() < 2)
        throw std::exception();
    unsigned int min = *std::min_element(_lst.begin(), _lst.end());
    unsigned int max = *std::max_element(_lst.begin(), _lst.end());
    return (max - min);
}

void	Span::insert(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (last - first + _lst.size() > _size)
		throw std::exception();
	_lst.insert(_lst.end(), first, last);
}
