/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:45:56 by steh              #+#    #+#             */
/*   Updated: 2022/09/27 13:19:28 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Span.hpp"

void	test1(void);
void	test2(void);
void	test3(void);
void	test4(void);
void	test5(void);

int main(void)
{	
	test1(); 
	// test2();
	// test3();
	// test4();
	// test5();
	// system("leaks program");
	return (0);
}


void	test1(void)
{
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

void	test2(void)
{
	unsigned int	size;

	size = 11000;
	Span			S(size);
	for (size_t i = 0; i < size; i++)
	{
		S.addNumber(i);
	}
	cout << S << endl;
	cout << S.shortestSpan() << endl;
	cout << S.longestSpan() << endl;
}

void	test3(void)
{
	// test error;
	unsigned int	size;

	size = 2;
	Span			S(size);
	for (size_t i = 0; i < size; i++)
	{
		S.addNumber(i);
	}
	cout << S.shortestSpan() << endl;
	cout << S.longestSpan() << endl;
	cout << S << endl;
}

void	test4(void)
{
	// test asssignment
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
	// test copy constructor
	Span	S(3);
	
	S.addNumber(1);
	Span	SS = S;
	SS.addNumber(2);
	cout << "size S: " << S.getSizeN() << endl;
	cout << S << endl;
	cout << "size SS: " << SS.getSizeN() << endl;
	cout << SS << endl;
}
