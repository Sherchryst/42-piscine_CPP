/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:29:26 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 15:56:56 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){}
ZombieEvent::~ZombieEvent(void){}

std::string ZombieEvent::_zombieName[7] = {
	"Meechy Darko",
	"Zombie Juice",
	"Erick Arc",
	"Michael Jackson",
	"Barry White",
	"Serge Gainsbourg",
	"Marvin Gaye",
};

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(name, _type);
}

void	ZombieEvent::randomChump(void)
{
	Zombie famous = Zombie(ZombieEvent::_zombieName[std::rand() % 7], this->_type);
}

