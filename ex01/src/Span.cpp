/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:58:01 by steh              #+#    #+#             */
/*   Updated: 2022/09/29 19:53:11 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

Span::Span(unsigned int n) : _N(n)
{
	return ;
}

Span::Span(Span const & src) : _N(src._N)
{
	this->_arr = src._arr;
	for (size_t i = 0; i < src._arr.size(); i++)
	{
		this->_arr.push_back(src._arr[i]);
	}
	*this = src;
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_arr = rhs._arr;
	for (size_t i = 0; i < rhs._arr.size(); i++)
	{
		this->_arr.push_back(rhs._arr[i]);
	}
	return (*this);
}

Span::~Span(void)
{
	return ;
}


void	Span::addNumber(int n)
{
	if (this->_arr.size() < this->_N)
		this->_arr.push_back(n);
	else
		throw (std::overflow_error("Span full"));
}

static long	getDistance(long first, long second)
{
	return (std::abs(first - second));
}

long	Span::shortestSpan(void) const
{
	// long				shortest;
	std::vector<long>	copy;
	std::vector<long>	result;

	if (this->_arr.size() <= 1)
			throw (std::logic_error("Not enough elements to check shortest span"));
	// std::copy(this->_arr.begin(), this->_arr.end(), std:back_inserter(copy));
	// std::copy(this->_arr.begin(), this->_arr.end() - 1, std::back_inserter(result));
	copy.assign(this->_arr.begin(), this->_arr.end());
	result.assign(this->_arr.begin(), this->_arr.end());
	std::sort(copy.begin(), copy.end());
	std::transform(copy.begin(), copy.end() - 1, copy.begin() + 1, result.begin(), getDistance);
	// shortest = *std::min_element(result.begin(), result.end());
	return (*std::min_element(result.begin(), result.end()));
}

// another method
// long	Span::shortestSpan(void) const
// {
// 	std::vector<long>			copy;
// 	std::vector<long>::iterator	t1;
// 	long						shortest;

// 	std::copy(this->_arr.begin(), this->_arr.end(), std::back_inserter(copy));
// 	shortest = *std::max_element(copy.begin(), copy.end());
// 	sort(copy.begin(), copy.end());
// 	for (size_t i = 0; i < copy.size() - 1; i++)
// 	{
// 		shortest = std::min(shortest, std::abs(copy[i + 1] - copy[i]));
// 	}
// 	return (shortest);
// }

long	Span::longestSpan(void) const
{
	long	longest;
	long	max;
	long	min;

	if (this->_arr.size() <= 1)
			throw (std::logic_error("Not enough elements to check longest span"));
	min = *std::min_element(this->_arr.begin(), this->_arr.end());
	max = *std::max_element(this->_arr.begin(), this->_arr.end());
	longest = max - min;
	// another method
	// std::vector<long> longVec(this->_arr.begin(), this->_arr.end());
	// sort(longVec.begin(), longVec.end());
	// longest = longVec[longVec.size() - 1] - longVec[0];
	return (longest);
}

unsigned int	Span::getSizeN(void) const
{
	return (this->_N);
}

vector<int>		Span::getVector(void) const
{
	return (this->_arr);
}

static int	print(int n)
{
	std::cout << n << " ";
	return (n);
}

void	Span::printSpan(void) const
{
	std::vector<int>	tempVec(this->_arr.size(), 0);

	std::transform(this->_arr.begin(), this->_arr.end(), tempVec.begin(), print);
	cout << endl;
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	cout << "Span contents: [ ";
	for (unsigned int i = 0; i < rhs.getVector().size(); i++)
	{
		cout << (rhs.getVector())[i] << " ";
	}
	cout << "]" << endl;
	return (o);
}

void	Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	if ( this->_arr.size() > this->_N )
		throw std::out_of_range("Span::addNumber: list is full");
	this->_arr.insert(this->_arr.end(), it, ite);
}
