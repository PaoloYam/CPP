/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 20:57:53 by pyammoun          #+#    #+#             */
/*   Updated: 2023/06/28 13:28:21 by pyammoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}



void	PmergeMe::pairCreationLst(std::list<int>& myContainer)
{
	int							first;
	int							second;
	std::list<int>::iterator	it;

	_waitingLst = myContainer;
	for (it = _waitingLst.begin(); it != _waitingLst.end(); ++it)
	{
		if (std::next(it) != _waitingLst.end())
		{
			first = *it;
			second = *std::next(it);
			if (first > second)
				swap(first, second); 
			_pairLst.push_back(std::make_pair(first, second));
			_mainLst.push_back(second);
			++it;
		}
		else
			_mainLst.push_back(*it);
	}
	_mainLst.sort(); 
	if (_waitingLst.size() % 2 == 0)
		_mainLst.push_front(findPairLst(_pairLst, _mainLst)); 
	}

int	PmergeMe::findPairLst(std::list<std::pair<int, int> >& pairList, std::list<int>& mainList)
{
	int											research = *mainList.begin();
	int											result = -42;
	std::list<std::pair<int, int> >::iterator	it = pairList.begin();
	

	while (it != pairList.end())
	{
		if (research == it->second)
		{
			result = it->first;
			pairList.erase(it);
			break ;
		}
		++it;
	}
	return result;
}

void	PmergeMe::binSrchLst(void)
{
	std::list<std::pair<int, int> >::iterator	it;
	std::list<int>::iterator 					iter;

	for (it = _pairLst.begin(); it != _pairLst.end(); ++it)
	{
		iter = lower_bound(_mainLst.begin(), _mainLst.end(), it->first); 
		_mainLst.insert(iter, it->first); 
	}
}

void	PmergeMe::sortLst(std::list<int>& myContainer)
{
	printContainerB(myContainer);
	clock_t time = std::clock();
	pairCreationLst(myContainer);
	binSrchLst();
	time = std::clock() - time;
	printContainerA(_mainLst);
	std::cout << "Time taken with a std::list of int " << time << "us" << std::endl;	
}

void	PmergeMe::pairCreationVctr(std::vector<int>& myContainer)
{
	int							first;
	int							second;
	std::vector<int>::iterator	it;

	_waitingVctr = myContainer;
	for (it = _waitingVctr.begin(); it != _waitingVctr.end(); ++it)
	{
		if (std::next(it) != _waitingVctr.end())
		{
			first = *it;
			second = *std::next(it);
			if (first > second)
				swap(first, second); 
			_pairVctr.push_back(std::make_pair(first, second));
			_mainVctr.push_back(second);
			++it;
		}
		else
			_mainVctr.push_back(*it);
	}

	std::sort(_mainVctr.begin(), _mainVctr.end()); 

	if (_waitingVctr.size() % 2 == 0)
		_mainVctr.insert(_mainVctr.begin(), findPairVctr(_pairVctr, _mainVctr)); 
}

int	PmergeMe::findPairVctr(std::vector<std::pair<int, int> >& pairVctr, std::vector<int>& mainVctr)
{
	
	int											research = *mainVctr.begin();
	int											result = -42;
	std::vector<std::pair<int, int> >::iterator	it = pairVctr.begin();

	while (it != pairVctr.end())
	{
		if (research == it->second)
		{
			result = it->first;
			pairVctr.erase(it);
			break ;
		}
		++it;
	}
	return result;
}

void	PmergeMe::binSrchVctr(void)
{
	std::vector<std::pair<int, int> >::iterator	it;
	std::vector<int>::iterator 					iter;

	for (it = _pairVctr.begin(); it != _pairVctr.end(); ++it)
	{
		iter = lower_bound(_mainVctr.begin(), _mainVctr.end(), it->first); 
		_mainVctr.insert(iter, it->first); 
	}
}

void	PmergeMe::sortVctr(std::vector<int>& myContainer)
{
	printContainerB(myContainer);
	clock_t time = std::clock();
	pairCreationVctr(myContainer);
	binSrchVctr();
	time = std::clock() - time;
	printContainerA(_mainLst);
	std::cout << "Time taken with a std::vector of int " << time << "us" << std::endl;		
}

const char		*PmergeMe::negativeValue::what() const throw() {
	return ("Value is not a positive integer");
}

const char		*PmergeMe::wrongArguments::what() const throw() {
	return ("Grade is too low");
}