/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:37:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/20 17:34:05 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool    isChar(std::string litteral) {
    if (litteral.length() = 1)
    {
        char c = litteral[0];
        if (c > 31 && c <= 127 && !isdigit(c))
        return (true);
    }
    return (false);
}

bool    isInt(std::string litteral)
{
    for (size_t i = 0; i < litteral.length(); i++)
    {
        if (i == 0 && litteral[i] == '-')
            continue;
        if (isdigit(litteral[i]))
            continue;
        return false;
    }
    return (true);
}

int     isFloat(std::string litteral)
{
    int sign = 0;
    int dote = 0;
    int f = 0;
    int pres = 0;

    for (size_t i = 0; i < litteral.length(); i++)
    {
        if (litteral[i] == '-' || litteral[i] == '+')
        {
            if (i != 0)
                return (false);
            continue;
        }
        if (litteral[i] == '.')
        {
            dote++;
            continue;
        }
        if (litteral[i] == 'f')
        {
            if (i != litteral.length() - 1)
                return (false);
            f++;
            continue;
        }
        if (!isdigit(litteral[i]))
            return (false);
        if (isdigit(literal[i]) && dote == 1)
			pres++;
    }
    if (sign <= 1 && dote == 1 && f == 1)
		return (pres);
	return (false);
}


int	isDob(std::string literal)
{
	int	sign = 0;
	int	dote = 0;
	int	pres = 0;

	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '-' || literal[i] == '+')
		{
			if (i != 0)
				return (false);
			continue ;
		}
		if (literal[i] == '.')
		{
			dote++;
			continue ;
		}
		if (!isdigit(literal[i]))
			return (false);
		if (isdigit(literal[i]) && dote == 1)
			pres++;
	}
	if (sign <= 1 && dote == 1)
		return (pres);
	return (false);
}




std::string FindType(std::string litteral)
{
    if (isChar(litteral))
        return ("char");
    if (isInt(litteral))
        return ("int");
    if (isFloat(litteral))
        return ("float");
    if (isDob(litteral))
        return ("double");
    if (litteral == "-inff" || litteral == "+inff" || litteral == "nanf"
                    || litteral = "-inf" || litteral == "+inf" || litteral == "nan")
        return ("litteral");           
        §

}