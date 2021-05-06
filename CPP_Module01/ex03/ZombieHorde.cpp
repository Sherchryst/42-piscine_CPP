/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:56 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 19:54:11 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::_zombieName[5] = {
	"Undead",
	"Acid Ghoul",
	"Day Walker",
	"Night Walker",
	"Japan Ghoul",
};

ZombieHorde::ZombieHorde(int n): _count(n)
{
	this->_horde = 	new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		this->_horde[i].setName(ZombieHorde::_zombieName[std::rand() % 5]);
		this->_horde[i].setType("Horde");
	}
} 

void	ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_count; i++)
		this->_horde[i].announce();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_horde;
}
