/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:25:12 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/27 20:40:29 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{

}	

RPN::RPN(std::string value) : _value(value)
{
	std::string	is;
	
	while (_value >> is)
	{
		if (int_value(is))
			_stack.push(is[0] - '0');
		else if (operator_value(is) && _stack.size() >= 2)
		{
			_first = _stack.top();
			_stack.pop();
			_second = _stack.top();
			_stack.pop();
			_stack.push(operation(is[0]));
		}
		else
		{
			std::cerr << "Wrong input" << std::endl;
			return;
		}
	}	
	if (_stack.size() == 1)
		std::cout << "Result : " <<  _stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}

RPN::~RPN(void)
{
}

RPN::RPN(RPN const & src)
{
	(void)src;
}

RPN&	RPN::operator=(RPN const & rhs)
{
	(void)rhs;
	return (*this);
}

int	RPN::int_value(std::string const & is)
{
	if (is.size() == 1 && is[0] >= '0' && is[0] <= '9')
		return (1);
	else
		return (0);
}

int	RPN::operator_value(std::string const & is)
{
	if (is.size() != 1)
		return (0);
	else if (is[0] == '+')
		return (1);
	else if (is[0] == '-')
		return (1);	
	else if (is[0] == '*')
		return (1);
	else if (is[0] == '/')
		return (1);
	else
		return (0);
}

int	RPN::operation(char c)
{
	if (c == '+')
		return (_first + _second);
	else if (c == '-')
		return (_second - _first);
	else if (c == '*')
		return (_first * _second);
	else if (c == '/')
		return (_second / _first);
	else
	{
		std::cerr << "Wrong operator" << std::endl;
		return (0); 
	}	
}