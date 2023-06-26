/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:18:24 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/20 17:34:15 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <iostream>
# include  <iomanip>

void		convert(std::string literal);
std::string	whichType(std::string literal);
void		printChar(char c);
void		printInt(int i);
void		printFloat(float f, int pres);
void		printDouble(double d, int pres);
int			isFloat(std::string literal);
int			isDub(std::string literal);

#endif