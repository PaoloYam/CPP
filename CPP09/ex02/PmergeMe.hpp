/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:57:53 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/28 11:31:30 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <ctime>		
# include <list>
# include <vector>


class PmergeMe
{
public:
	PmergeMe(void);
	~PmergeMe(void);

	void								sortLst(std::list<int>& myContainer);
	int									findPairLst(std::list<std::pair<int, int> >& pairList, std::list<int>& mainList);
	void								pairCreationLst(std::list<int>& myContainer);
	void								binSrchLst(void);
	
	void								sortVctr(std::vector<int>& myContainer);
	int									findPairVctr(std::vector<std::pair<int, int> >& pairVector, std::vector<int>& mainVector);
	void								pairCreationVctr(std::vector<int>& myContainer);
	void								binSrchVctr(void);

	  class negativeValue: public std::exception
    {
        public:
            virtual const char* what () const throw();
    };

	  class wrongArguments: public std::exception
    {
        public:
            virtual const char* what () const throw();
    };

private:
	

	std::list<int>						_waitingLst;
	std::list<int>						_mainLst;
	std::list<std::pair<int, int> >		_pairLst;

	std::vector<int>					_waitingVctr;
	std::vector<int>					_mainVctr;
	std::vector<std::pair<int, int> >	_pairVctr;
	
	PmergeMe(const PmergeMe& src);
	PmergeMe&							operator=(const PmergeMe& rhs);
};

template <typename T>
void    swap (T & x, T & y)
{
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
    return;
}

template<typename T>
void	addNumber(int n, T& container, const std::string& str)
{
	if (n < 0 || str.find_first_not_of("0123456789") != std::string::npos)
		throw (PmergeMe::negativeValue());

	container.push_back(n);
}

template<typename T>
void	printContainerB(T& container)
{
	typename T::iterator it;
	std::cout << "Before: "<< std::endl;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void	printContainerA(T& container)
{
	typename T::iterator it;
	std::cout << "After: " << std::endl;
	for (it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

#endif




