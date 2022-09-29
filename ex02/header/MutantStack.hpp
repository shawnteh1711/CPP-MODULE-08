/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:49:13 by steh              #+#    #+#             */
/*   Updated: 2022/09/28 23:24:06 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

using std::stack;
using std::cout;
using std::endl;

template <typename T>
class MutantStack : public stack<T>
{
	private:
		/* data */
	public:
		MutantStack(void);
		MutantStack(MutantStack const & src);
		MutantStack & operator=(MutantStack const & rhs);
		~MutantStack(void);

		typedef typename stack<T>::container_type::iterator iterator;
		typedef typename stack<T>::container_type::const_iterator const_iterator;
		typedef typename stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin(void)
		{
			return (stack<T>::c.begin());
		}

		const_iterator	begin(void) const
		{
			return (stack<T>::c.cbegin());
		}

		iterator	end(void)
		{
			return (stack<T>::c.end());
		}

		const_iterator	end(void) const
		{
			return (stack<T>::c.cend());
		}

		reverse_iterator	rbegin(void)
		{
			return (stack<T>::c.rbegin());
		}

		const_reverse_iterator	rbegin(void) const
		{
			return (stack<T>::c.crbegin());
		}

		reverse_iterator	rend(void)
		{
			return (stack<T>::c.rend());
		}

		const_reverse_iterator	rend(void) const
		{
			return (stack<T>::c.crend());
		}

};

#endif
