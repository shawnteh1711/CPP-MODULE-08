/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:58:01 by steh              #+#    #+#             */
/*   Updated: 2022/09/15 08:07:11 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

Span::Span(unsigned int n) : _N(n)
{
	return ;
}

Span::Span(Span const & src) : _N(src._N)
{
	// this->_arr = src._arr;
	// this->_arr.reserve(src._N);
	for (size_t i = 0; i < src._arr.size(); i++)
	{
		this->_arr.push_back(src._arr[i]);
	}
	
	return ;
}

Span & Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_arr = rhs._arr;
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

int		Span::shortestSpan(void) const
{
	vector<int>				tmp;
	vector<int>::iterator	max;
	int						shortest;
	
	cout << "size:" << this->_arr.size() << endl;
	if (this->_arr.size() < 3)
		throw (std::logic_error("Less than 3 elements to check shortest span"));

	tmp = this->_arr;
	max = std::max_element(tmp.begin(), tmp.end());
	shortest = *max;
	sort(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < shortest)
			shortest = tmp[i + 1] - tmp[i];
	}
	return (shortest);
	
}

int		Span::longestSpan(void) const
{
	vector<int>::const_iterator	min;
	vector<int>::const_iterator	max;
	int							longest;

	if (this->_arr.size() < 3)
			throw (std::logic_error("Less than 3 elements to check longest span"));
	// min = std::min_element(this->_arr.begin(), this->_arr.end());
	// max = std::max_element(this->_arr.begin(), this->_arr.end());
	// longest = *max - *min;

	vector<int>	tmp = this->_arr;
	sort(tmp.begin(), tmp.end());
	longest = tmp[tmp.size() - 1] - tmp[0];
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
