/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/19 19:49:50 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name): _hitPoint(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(Name), _meleeAttackDamage(20), _rangedAttackDamage(20), _armorDamageReduction(5) {}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap::~FragTrap(void) {}

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "<" << _name << "> Use Mega Blaster(Ranged Attack) *PIIOOOUUU " << "<"
	<< target << "> got shoot *BOOM*" << std::endl << "{<" << target
	<< "> recieved " << _rangedAttackDamage - _armorDamageReduction << " damage points"<<std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "<" << _name << "> Use Laser Blade(Melee Attack) *PIIOOOUUU " << "<"
	<< target << "> got hit *BAM*" << std::endl << "{<" << target
	<< "> recieved " << _meleeAttackDamage << " damage points"<<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint < 0)
	{
		std::cout << "Damn stop shoot <"<<_name<<"> empty carcass!"<<std::endl;
		return ;
	}
	else
	{
		_hitPoint -= amount;
		if (_hitPoint < 0)
			_hitPoint = 0;
		std::cout << "<"<<_name<<"> "<< _hitPoint<<" HP left!"<<std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint == _maxHitPoints)
	{
		std::cout << "<"<<_name<<"> HP is full!"<<std::endl;
		return ;
	}
	else
	{
		_hitPoint += amount;
		if (_hitPoint > _maxHitPoints)
			_hitPoint = _maxHitPoints;
		std::cout << "<"<<_name<<">  "<< _hitPoint<<" HP left!"<<std::endl;
	}

}

