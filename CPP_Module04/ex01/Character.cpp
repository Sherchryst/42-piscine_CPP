/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:51:07 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 13:29:38 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name), _ap(40), _wp(NULL)
{

}

Character::Character(Character const & src): _name(src._name), _ap(src._ap), _wp(src._wp)
{

}

Character::~Character(void) {}

std::string const	Character::getName(void)const
{
	return this->_name;
}

void	Character::equip(AWeapon* wp)
{
	this->_wp = wp;
}

void	Character::recoverAP(void)
{
	if(this->_ap < 40)
		this->_ap += 10;
	if(this->_ap > 40)
		this->_ap = 40;
}

void	Character::attack(Enemy* nmy)
{
	if(this->_wp && nmy)
		if (this->_ap > this->_wp->getAPCost())
		{
			std::cout<< this->_name <<" attacks "<< nmy->getType()
			<<" with a "<< this->_wp->getName() <<std::endl;
			this->_wp->attack();
			nmy->takeDamage(this->_wp->getDamage());
			if (nmy->getHP() == 0)
				delete nmy;
			_ap -= this->_wp->getAPCost();
		}
}

int	Character::getAP(void)const
{
	return this->_ap;
}

AWeapon*	Character::getWP(void)const
{
	return this->_wp;
}

std::ostream &	operator<<(std::ostream & o, Character const &rhs)
{
	if(rhs.getWP())
		o << rhs.getName() <<" has "<< rhs.getAP()
		<<" AP and wields a "<< (rhs.getWP())->getName() <<std::endl;
	else
		o << rhs.getName() <<" has "<< rhs.getAP()
		<<" AP and  is unarmed"<<std::endl;
	return o;
}

