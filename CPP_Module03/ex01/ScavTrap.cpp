/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:22:23 by sgah              #+#    #+#             */
/*   Updated: 2021/05/21 21:29:17 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) :
	_hit(100), _maxHit(100), _energy(50), _maxEnergy(50),
	_level(1), _name(Name), _melee(20), _ranged(15),
	_armor(3)
{
	std::cout<<"<"<<this->_name<<"> You shall not pass!"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout<<"<"<<this->_name<<"> You shall not pass!"<<std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout<<"<"<< this->_name <<"> I can't afford to die; I'd lose too much money."
	<<std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_energy >= 0)
	{
		this->_energy -= 10;
		std::cout << "<" << this->_name << "> Used Mega Blaster(Ranged Attack) *PIIOOOUUU* " << "<"
		<< target << "> got shoot *BOOM*" << std::endl << "{<" << target
		<< "> recieved " << this->_ranged - 5 << " damage points}"<<std::endl;
	}
	else
		std::cout << "You out of Energy!"<<std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_energy >= 10)
	{
		this->_energy -= 10;
		std::cout << "<" << this->_name << "> Used Laser Blade(Melee Attack) *SLAAAAASH* " << "<"
		<< target << "> got hit *BAM*" << std::endl << "{<" << target
		<< "> recieved " << this->_melee - 5<< " damage points}"<<std::endl;
	}
	else
		std::cout<<"You out of Energy"<<std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

std::string	ScavTrap::_chall[5] = {
	"If i eat myself will I get twice as big or disappear completely?",
	"I swallowed an ice cube whole, what will I poop out?",
	"At what age does a boy period start?",
	"Is an egg a fruit or a vegetable?",
	"Is whale sperm the reason why the ocean so salty?"
};

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::cout << "<"<<this->_name<<"> " << ScavTrap::_chall[std::rand() % 5]
		<< std::endl;
	std::cout << "<"<<target<<"> *ignore the Challenged*" << target << std::endl;
}
