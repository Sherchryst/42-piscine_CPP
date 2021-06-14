/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:20:34 by sgah              #+#    #+#             */
/*   Updated: 2021/06/11 10:50:39 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "whatever.hpp"
#include <iostream>

class A
{
	private:
		int _n;
	public:
		A(int n = 0) : _n(n)
		{};
		int getN(void) const
		{
			return (_n);
		};
		bool operator>(const A &other)
		{
			return (_n > other._n);
		};
		bool operator<(const A &other)
		{
			return (_n < other._n);
		};
};

void show(A &s)
{
	std::cout << s.getN() << " ";
}

void top(int &c)
{
	c++;
}

void top(char &c)
{
	c = std::toupper(c);
}

int main(void)
{
	int in[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter(in, sizeof(in) / sizeof(int), &top);
	for (unsigned long i = 0; i < sizeof(in) / sizeof(int); i++)
		std::cout<< in[i] << " ";
	std::cout<<std::endl;

	char T[] = "abcdefghijklmnopqrstuvwxyz";

	iter(T, sizeof(T) / sizeof(char), &top);
	std::cout<< T <<std::endl;

	iter(T, sizeof(T) / sizeof(char), &bottom);
	std::cout<< T <<std::endl;

	A list3[3];
	list3[0] = A(21);
	list3[1] = A(42);
	list3[2] = A(-42);
	iter(list3, 3, &show);
	return (0);
}
