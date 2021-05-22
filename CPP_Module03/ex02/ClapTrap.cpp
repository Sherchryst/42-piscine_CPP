/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:26:48 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 15:55:29 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hit, int maxHit, int energy, int maxEnergy,
		int level, std::string name, int melee, int ranged, int armor):
	_hit(hit), _maxHit(maxHit), _energy(energy), _maxEnergy(maxEnergy),
	_level(level), _name(name), _melee(melee), _ranged(ranged),
	_armor(armor)
{
	std::cout<<"Creation of "<<name<<" mold!"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs):
	_hit(rhs._hit), _maxHit(rhs._maxHit), _energy(rhs._energy), _maxEnergy(rhs._maxEnergy),
	_level(rhs._level), _name(rhs._name), _melee(rhs._melee), _ranged(rhs._ranged),
	_armor(rhs._armor)

{
	std::cout<<"creation of "<<this->_name<<" mold!"<<std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout<<"destruction of "<<this->_name<<" mold!"<<std::endl;
}

int	ClapTrap::getEP(void) const
{
	return this->_energy;
}

int	ClapTrap::getHP(void) const
{
	return this->_hit;
}

void	ClapTrap::levelUp(void)
{
	this->_level++;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit == 0)
	{
		std::cout << "Damn stop shoot <"<<this->_name<<"> empty carcass!"<<std::endl;
		return ;
	}
	else
	{
		this->_hit = (this->_hit + this->_armor) - amount;
		if (this->_hit < 0)
			this->_hit = 0;
		std::cout << "<"<<this->_name<<"> "<< this->_hit<<" HP left!"<<std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit == this->_maxHit)
	{
		std::cout << "<"<<this->_name<<"> HP is full!"<<std::endl;
	}
	else
	{
		this->_hit += amount;
		if (this->_hit > this->_maxHit)
			this->_hit = this->_maxHit;
		std::cout << "<"<<this->_name<<">  got healed "<< this->_hit<<" HP left!"<<std::endl;
	}

	if (this->_energy == this->_maxEnergy)
	{
		std::cout << "<"<<this->_name<<"> EP is full!"<<std::endl;
	}
	else
	{
		this->_energy += amount;
		if (this->_energy > this->_maxEnergy)
			this->_energy = this->_maxEnergy;
		std::cout << "<"<<this->_name<<">  got restored "<< this->_energy<<" EP left!"<<std::endl;
	}
}
