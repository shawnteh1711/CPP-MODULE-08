/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:09:56 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 11:12:03 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/easyfind.hpp"
#include <vector>
#include <list>
#include <array>

using std::cout;
using std::endl;

void test1(void);
void test2(void);
void test3(void);

int main(void)
{
	test1();
	test2();
	test3();
	return 0;
}

void test1(void)
{
	// vector
	std::vector<int>					cont;
	std::vector<int>::const_iterator	it;

	for (size_t i = 0; i < 5; i++)
		cont.push_back(i);

	it = easyfind(cont, 1);
	cout << *it << endl;
	try
	{
		it = easyfind(cont, -1);
	}
	catch(const std::overflow_error & e)
	{
		std::cerr << e.what() << endl;
	}
}

void test2(void)
{
	std::list<int>					cont;
	std::list<int>::const_iterator	it;

	for (size_t i = 0; i < 5; i++)
		cont.push_back(i);

	it = easyfind(cont, 1);
	cout << *it << endl;
	try
	{
		it = easyfind(cont, -1);
	}
	catch(const std::overflow_error & e)
	{
		std::cerr << e.what() << endl;
	}
}

void test3(void)
{
	std::array<int, 5>					cont;
	std::array<int, 5>::const_iterator	it;

	for (size_t i = 0; i < 5; i++)
		cont[i] = i;

	it = easyfind(cont, 1);
	cout << *it << endl;
	try
	{
		it = easyfind(cont, -1);
	}
	catch(const std::overflow_error & e)
	{
		std::cerr << e.what() << endl;
	}
	std::reverse_copy(cont.begin(), cont.end(), 
		std::ostream_iterator<int>(std::cout, " "));
}
