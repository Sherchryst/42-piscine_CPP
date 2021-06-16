/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:55:26 by sgah              #+#    #+#             */
/*   Updated: 2021/06/16 09:31:52 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
	int n = 10000;
	span Sp = span(n);

	std::srand(time(0));
	for (int i = 0; i < n; i++)
		Sp.addNumber(i);

	try
	{
		Sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Shortest span: " << Sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << Sp.longestSpan() << std::endl;

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
