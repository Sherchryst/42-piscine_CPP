/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:41:01 by sgah              #+#    #+#             */
/*   Updated: 2021/04/20 19:21:18 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int
	main(int ac, char **av){
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for (size_t j = 0; j < str.size(); j++)
				str.at(j) = std::toupper(str.at(j));
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}
