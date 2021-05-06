/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:55:34 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 20:34:22 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <sstream>


int main()
{
	int		count;
	std::string	input;
	
	std::cout << "How many Zombies in the Horde: ";
	if(!std::getline(std::cin, input))
		 return (0);
	std::cout << std::endl;

	std::istringstream iss(input);
	iss >> count;

	if(count <= 0)
		return (0);

	ZombieHorde* ZNation = new ZombieHorde(count);

	std::cout << "OMG I can hear them coming!!!" << std::endl;
	std::cout << std::endl;

	ZNation->announce();
	std::cout << std::endl;

	std::cout << "Nuclear Bomb drop!!! *KAABOOOOOOOOOOOM" << std::endl;
	std::cout << std::endl;

	delete ZNation;
}
