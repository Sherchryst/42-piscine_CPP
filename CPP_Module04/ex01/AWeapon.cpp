/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:23:05 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 15:48:24 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	_name(name), _cost(apcost), _dmg(damage) {}

AWeapon::AWeapon(AWeapon const & src):
	_name(src._name), _cost(src._cost), _dmg(src._dmg) {}

AWeapon::~AWeapon(void) {}

std::string const  & AWeapon::getName(void) const
{
	return this->_name;
}

int	AWeapon::getAPCost(void) const
{
	return this->_cost;
}

int	AWeapon::getDamage(void) const
{
	return this->_dmg;
}

