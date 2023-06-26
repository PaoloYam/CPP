/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:34:02 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/21 15:58:31 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream> 

#define MAX_VAL 600

template <typename T>
class Array
{
    public :

        Array(void)
        {
            _array = new T[1];
            std::cout << "An empty array has been created" <<std::endl;
        }

        Array(unsigned int n) : _n(n) 
        {
            _array = new T[n];
            for (unsigned int i = 0; i < _n; i++)
                _array[i] = 0;
            std::cout << "An array of " << n << " has been created" << std::endl;
        }

        Array(const Array &cpy)
        {
            _array = NULL;
            *this = cpy;
            std::cout << "A copy has been created" << std::endl; 
        }

        Array &operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                _n = rhs._n;
                if (_array)
                    delete (_array);
                _array = new T[_n];
                for (unsigned int i = 0; i < _n; i++)
                    _array[i] = rhs._array[i];
            }
            return (*this);
        }

        ~Array(void)
        {
            if (_array)
                delete [] (_array);
            std::cout<< "Array has been deleted" << std::endl;
        }

        T & operator[](unsigned int i)
        {
            if (i > (_n - 1))
                throw std::exception();
            return (_array[_n]);
        }

        unsigned int size() const
        {
            return (this->_n);
        }

    private :

        unsigned int _n;
        T            *_array;
};
#endif