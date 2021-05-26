/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:21:02 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:37:47 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type) {}

Enemy::Enemy(Enemy const & src): _hp(src._hp), _type(src._type) {}

Enemy::~Enemy(void) {}

std::string const &	Enemy::getType(void) const
{
	return this->_type;
}

int					Enemy::getHP(void)const
{
	return this->_hp;
}

void				Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
}

