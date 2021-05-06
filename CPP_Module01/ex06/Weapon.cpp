/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:39:30 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 19:11:00 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon(void){}

void			Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const &	Weapon::getWeapon(void) const
{
	return this->_type;
}
