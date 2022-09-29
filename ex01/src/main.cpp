/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:45:56 by steh              #+#    #+#             */
/*   Updated: 2022/09/29 19:54:34 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

void	test1(void);
void	test2(void);
void	test3(void);
void	test4(void);
void	test5(void);
void	test6(void);
void	test7(void);
void	test8(void);

int main(void)
{	
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	// system("leaks program");
	return (0);
}


void	test1(void)
{
	cout << "\n------EX01 TEST1 PDF TEST-------\n" << endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9); 
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	cout << sp << endl;
}

int f(void)
{ 
	static int i;
	return (++i);
}

void	test2(void)
{
	cout << "\n------EX01 TEST2 ADD BIG NUMBER-------\n" << endl;
	std::vector<int>	vec(11000);
	Span				S(vec.size() + 1);

	std::generate(vec.begin(), vec.end(), f);
	S.addNumber(vec.begin(), vec.end());
	S.addNumber(111111);
	S.printSpan();
	cout << S.shortestSpan() << endl;
	cout << S.longestSpan() << endl;
}

void	test3(void)
{
	cout << "\n------EX01 TEST3 ADD BIG NUMBER 2-------\n" << endl;
	unsigned int	size;

	size = 11000;
	Span			S(size);
	for (size_t i = 1; i < size; i++)
	{
		S.addNumber(i);
	}
	// cout << S << endl;
	S.printSpan();
	cout << S.shortestSpan() << endl;
	cout << S.longestSpan() << endl;
}

void	test4(void)
{
	cout << "\n------EX01 TEST4 COPY CONSTRUCTOR-------\n" << endl;
	Span	S(3);
	Span	SS(4);

	S.addNumber(1);
	SS = S;
	SS.addNumber(2);
	cout << "size S: " << S.getSizeN() << endl;
	cout << S << endl;
	cout << "size SS: " << SS.getSizeN() << endl;
	cout << SS << endl;
}

void	test5(void)
{
	cout << "\n------EX01 TEST5 COPY ASSIGNMENT-------\n" << endl;
	Span	S(3);
	
	S.addNumber(1);
	Span	SS = S;
	SS.addNumber(2);
	cout << "size S: " << S.getSizeN() << endl;
	cout << S << endl;
	cout << "size SS: " << SS.getSizeN() << endl;
	cout << SS << endl;
}

void	test6(void)
{
	cout << "\n------EX01 TEST6 OVERFLOW INT TEST-------\n" << endl;
	Span	sp = Span(4);

	// sp.addNumber(-2);
	// sp.addNumber(-1);
	// sp.addNumber(2147483647);
	// sp.addNumber(-2147483648);
	sp.addNumber(-1);
	sp.addNumber(-2);
	sp.addNumber(2147483647);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test7(void)
{
	cout << "\n------EX01 TEST7 TRY SPAN FULL-------\n" << endl;
	Span	sp(2);

	try
	{
		sp.addNumber(10);
		sp.addNumber(10);
		sp.addNumber(10);
		std::cout << "No Error" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	test8(void)
{
	cout << "\n------EX01 TEST8 TRY SPAN WITHOUT ENOUGH SIZE-------\n" << endl;
	Span	sp(2);

	try
	{
		sp.addNumber(1);
		// sp.addNumber(2);
		sp.shortestSpan();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "No Error" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		sp.longestSpan();
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "No Error" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
