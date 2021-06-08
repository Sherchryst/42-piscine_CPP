/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:05:55 by sgah              #+#    #+#             */
/*   Updated: 2021/06/09 00:35:23 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cfloat>
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <math.h>
#include <climits>

int main(int ac, char **av)
{
	if(ac <= 1)
	{
		std::cout<<"usage: ./convert <value>"<<std::endl;
		return (0);
	}

	std::string	str;
	double		k;
	int			first(0);
	int			last(0);

	while (av[1][first] && std::isspace(av[1][first]))
		first++;
	while (av[1][first + last] && !std::isspace(av[1][first + last]))
		last++;
	str = std::string(av[1], first, last);
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		k = str[0];
	else
		k = atof(str.c_str());

/**========================================================================
 *                           CONVERT CHAR
 *========================================================================**/
	std::cout << "char:   ";
	if (k < CHAR_MIN || k > CHAR_MAX || isnan(k))
		std::cout << "impossible" << std::endl;
	else if (std::isprint(k))
		std::cout << static_cast<unsigned char>(k) << std::endl;
	else
		std::cout << "non displayable" << std::endl;

/**========================================================================
 *                           CONVERT INT
 *========================================================================**/
	std::cout << "int:    ";
	if (k >= INT_MIN && k <= INT_MAX && !isnan(k) && !isinf(k))
		std::cout << static_cast<int>(k) << std::endl;
	else
		std::cout << "impossible " << std::endl;

/**========================================================================
 *                           CONVERT FLOAT
 *========================================================================**/
	std::cout << "float:  ";
	if (isnan(k))
		std::cout << "nan";
	else if (isinf(k))
		std::cout << (k < 0 ? "-" : "") << "inf";
	else
		std::cout << static_cast<float>(k);
	std::cout << "f" << std::endl;

/**========================================================================
 *                           CONVERT DOUBLE
 *========================================================================**/
	std::cout << "double: ";
	if (isnan(k))
		std::cout << "nan" << std::endl;
	else if (isinf(k))
		std::cout << (k < 0 ? "-" : "") << "inf" << std::endl;
	else
		std::cout << k << std::endl;
}
