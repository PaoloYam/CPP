/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:25:17 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/27 20:33:48 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>

class RPN {
	public:
		RPN(std::string value);
		virtual ~RPN(void);

		int	operation(char c);
		int	int_value(std::string const & is);
		int	operator_value(std::string const & is);

				
	
	private:

		int		_first;	
		int		_second;
		std::stack<int>		_stack;
		std::stringstream	_value;
	
		
		RPN(void);
		RPN(RPN const & cpy);
		RPN	&operator=(RPN const & rhs);
};
#endif
