/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:23:51 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 13:51:15 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::endl;
class Span
{
	private:
		unsigned int	_N;
		vector<int>		_arr;
		Span(void);

	public:
		Span(unsigned int n);
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		~Span(void);

		void			addNumber(int n);
		int				shortestSpan(void) const;
		int				longestSpan(void) const;
		unsigned int	getSizeN(void) const;
		vector<int>		getVector(void) const;
};

std::ostream	&operator<<(std::ostream & o, Span const & rhs);

#endif
