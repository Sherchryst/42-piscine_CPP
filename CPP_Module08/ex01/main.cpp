/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:55:26 by sgah              #+#    #+#             */
/*   Updated: 2021/06/17 11:27:52 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cstdlib>
#include <limits.h>

int main(void)
{
	int n = 10000;
	span Sp = span(n);
	span Sp2 = span(2);

	std::srand(time(0));
	for (int i = 0; i < n; i++)
		try
		{
			Sp.addNumber(std::rand());
		}
		catch(const std::exception& e) {}


	try
	{
		Sp.addNumber(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Sp.addNumber(150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Shortest span: " << Sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << Sp.longestSpan() << std::endl;

	Sp2.addNumber(INT_MAX);
	Sp2.addNumber(INT_MIN);

	std::cout << "Shortest span: " << Sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << Sp2.longestSpan() << std::endl;
/*
span sp = span(5);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
*/
}
