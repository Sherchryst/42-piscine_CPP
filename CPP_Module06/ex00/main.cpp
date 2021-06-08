/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:05:55 by sgah              #+#    #+#             */
/*   Updated: 2021/06/08 19:12:12 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <cfloat>
#include <sstream>

int main(int ac, char **av)
{
	if(ac <= 1)
	{
		std::cout<<"usage: ./convert <value>"<<std::endl;
		return (0);
	}

	std::string s = av[1];

	long double res;
	res = std::strtod(av[1], NULL);

	if(isnan(res) || isinf(res) || res < CHAR_MIN || res > CHAR_MAX)
		std::cout<<"char: impossible"<<std::endl;
	else if(std::isprint(static_cast<char>(res)))
		std::cout<<"char: "<< static_cast<char>(res) <<std::endl;
	else
		std::cout<<"char: not printable"<<std::endl;

	if(isnan(res) || isinf(res) || res < INT_MIN || res > INT_MAX)
		std::cout<<"int: impossible"<<std::endl;
	else
		std::cout<<"int: "<< static_cast<int>(res) <<std::endl;
}
