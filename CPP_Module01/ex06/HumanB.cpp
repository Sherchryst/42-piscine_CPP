/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:00:56 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 19:15:16 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name){}
HumanB::~HumanB(void){}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon->getWeapon()
	<< std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
}

