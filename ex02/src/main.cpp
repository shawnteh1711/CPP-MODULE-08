/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:14:04 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 17:07:56 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/MutantStack.hpp"
#include "MutantStack.tpp"

void	test1(void);
void	test2(void);

int main(void)
{
	test1();
	// test2();
	return (0);
}

void	test1(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	cout << endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	test2(void)
{
	MutantStack<std::string> mstack;
	mstack.push("aa");
	mstack.push("bb");
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push("cc");
	mstack.push("dd");
	mstack.push("ee");
	mstack.push("ff");
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	cout << endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<std::string> s(mstack);
}
