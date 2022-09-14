/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:12 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 16:28:50 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
	*this = src;
	return ;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs)
{
	(void) rhs;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}
