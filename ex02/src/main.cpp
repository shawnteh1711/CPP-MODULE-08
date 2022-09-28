/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:14:04 by steh              #+#    #+#             */
/*   Updated: 2022/09/28 17:17:51 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>

void	test1(void);
void	test2(void);
void	test3(void);

int main(void)
{
	test1();
	// test2();
	// test3();
	return (0);
}

void	test1(void)
{
	cout << "MUTANT STACK" << endl;
	MutantStack<int> mstack;
	mstack.push(5);  
	mstack.push(17);
	std::cout << mstack.top() << std::endl; //17, 5
	mstack.pop(); // 5
	std::cout << mstack.size() << std::endl; // 1
	mstack.push(3); // 5, 3
	mstack.push(5); // 5, 3, 5
	mstack.push(737); // 5, 3, 5, 737
	mstack.push(0);  // 5, 3, 5, 737, 0
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	cout << endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	cout << "const iterator" << endl;
	while (cit != ite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::stack<int> s(mstack);
}

void	test2(void)
{
	cout << endl;
	cout << "LIST" << endl;
	std::list<int> mstack;
	mstack.push_back(5);  
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl; //17, 5
	mstack.pop_back(); // 5
	std::cout << mstack.size() << std::endl; // 1
	mstack.push_back(3); // 5, 3
	mstack.push_back(5); // 5, 3, 5
	mstack.push_back(737); // 5, 3, 5, 737
	mstack.push_back(0);  // 5, 3, 5, 737, 0
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::const_iterator cit = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	cout << endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	cout << "const iterator" << endl;
	while (cit != ite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::list<int> s(mstack);
}

void	test3(void)
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
	MutantStack<std::string>::const_iterator cit = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	cout << endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	cout << "const iterator" << endl;
	while (cit != ite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::stack<std::string> s(mstack);
}
