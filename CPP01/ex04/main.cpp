/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:36:20 by pyammoun          #+#    #+#             */
/*   Updated: 2023/02/28 13:18:36 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string	replace(std::string content, std::string s1, std::string s2)
{
	for (size_t x = content.find(s1); x != content.npos;)
	{
		content.erase(x, s1.size());
		content.insert(x, s2);
		x = content.find(s1, x + s2.size());
	}
	return (content);
}

int main(int argc, char **argv)
{
	if (argc != 4)	
	{
		std::cout << "Pas le bon nombre d'arguments" << std::endl;
		return (0);
	}	
	std::string		file = argv[1];
	std::string 	outfile = file + ".replace";
	std::string		s1  = argv[2];
	std::string 	s2 = argv[3];
	std::ifstream 	iFile;
	std::ofstream	oFile;
	std::string 	content;
	
	if (argc != 4)	
	{
		std::cout << "Pas le bon nombre d'arguments" << std::endl;
		return (0);
	}
	iFile.open(file);
	if (!iFile.is_open())
	{
		std::cout << "Un probleme est survenu avec l'infile" << std::endl;
		iFile.close();
		return (0);
	}
	oFile.open(outfile);
	if (!oFile.is_open())
	{
		std::cout << "Une probleme est survenu avec l'outfile" << std::endl;
		oFile.close();
		iFile.close();
		return (0);	
	}
	char c = iFile.get();
	while (iFile.good())
	{
		content += c;
		c = iFile.get();
	}
	oFile << replace(content, s1, s2);	
	iFile.close();
	oFile.close();
	return (0);
}	

