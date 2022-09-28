/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:49:13 by steh              #+#    #+#             */
/*   Updated: 2022/09/27 13:27:39 by steh             ###   ########.fr       */
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

		iterator	begin(void)
		{
			return (stack<T>::c.begin());
		}

		const_iterator	begin(void) const
		{
			return (stack<T>::c.begin());
		}

		iterator	end(void)
		{
			return (stack<T>::c.end());
		}

		const_iterator	end(void) const
		{
			return (stack<T>::c.end());
		}

};

#endif
