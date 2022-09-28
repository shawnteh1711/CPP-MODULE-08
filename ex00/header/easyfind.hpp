/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:00:32 by steh              #+#    #+#             */
/*   Updated: 2022/09/28 17:13:26 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T const & cont, int i)
{
	typename T::const_iterator iter;

	iter = std::find(cont.begin(), cont.end(), i);
	
	if (cont.begin() == cont.end())
		throw (std::overflow_error("Array is empty"));
	else if (iter == cont.end())
		throw (std::overflow_error("Value not found"));
	else // (iter != cont.end())
	{
		std::cout << "contain " << i << std::endl;
		return (iter);
	}
}

#endif
