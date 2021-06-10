/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:20:34 by sgah              #+#    #+#             */
/*   Updated: 2021/06/10 18:46:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <array>

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
	return (0);
}
