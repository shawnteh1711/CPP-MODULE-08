/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:49:13 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 16:45:21 by steh             ###   ########.fr       */
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

		iterator	begin(void)
		{
			return (stack<T>::c.begin());
		}

		iterator	end(void)
		{
			return (stack<T>::c.end());
		}
};

#endif
