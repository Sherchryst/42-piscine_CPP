/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/21 20:18:55 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name):
	_hitPoint(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _name(Name), _meleeAttackDamage(20), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout<<"<"<<this->_name<<"> is Ready to fight!"<<std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs):
	_hitPoint(rhs._hitPoint), _maxHitPoints(rhs._maxHitPoints), _energyPoints(rhs._energyPoints), _maxEnergyPoints(rhs._maxEnergyPoints),
	_level(rhs._level), _name(rhs._name), _meleeAttackDamage(rhs._meleeAttackDamage), _rangedAttackDamage(rhs._rangedAttackDamage),
	_armorDamageReduction(rhs._armorDamageReduction)
{
	std::cout<<"<"<<this->_name<<"> is Ready to fight!"<<std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Omae wa mou shindeiru"<<std::endl;
	std::cout << "<"<<this->_name<<"> NANIII *KABOOOOM*" << std::endl; 
}

int	FragTrap::getEP(void) const
{
	return this->_energyPoints;
}

int	FragTrap::getHP(void) const
{
	return this->_hitPoint;
}

void	FragTrap::levelUp(void)
{
	this->_level++;
}

std::string	FragTrap::getName(void) const
{
	return this->_name;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_energyPoints >= 30)
	{
		this->_energyPoints -= 30;
		std::cout << "<" << this->_name << "> Used Mega Blaster(Ranged Attack) *PIIOOOUUU* " << "<"
		<< target << "> got shoot *BOOM*" << std::endl << "{<" << target
		<< "> recieved " << this->_rangedAttackDamage - this->_armorDamageReduction << " damage points}"<<std::endl;
	}
	else
		std::cout << "You out of Energy!"<<std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_energyPoints >= 20)
	{
		this->_energyPoints -= 20;
		std::cout << "<" << this->_name << "> Used Laser Blade(Melee Attack) *SLAAAAASH* " << "<"
		<< target << "> got hit *BAM*" << std::endl << "{<" << target
		<< "> recieved " << this->_meleeAttackDamage - this->_armorDamageReduction<< " damage points}"<<std::endl;
	}
	else
		std::cout<<"You out of Energy"<<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "Damn stop shoot <"<<this->_name<<"> empty carcass!"<<std::endl;
		return ;
	}
	else
	{
		this->_hitPoint = (this->_hitPoint + this->_armorDamageReduction) - amount;
		if (this->_hitPoint < 0)
			this->_hitPoint = 0;
		std::cout << "<"<<this->_name<<"> "<< this->_hitPoint<<" HP left!"<<std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == this->_maxHitPoints)
	{
		std::cout << "<"<<this->_name<<"> HP is full!"<<std::endl;
	}
	else
	{
		this->_hitPoint += amount;
		if (this->_hitPoint > this->_maxHitPoints)
			this->_hitPoint = this->_maxHitPoints;
		std::cout << "<"<<this->_name<<">  got healed "<< this->_hitPoint<<" HP left!"<<std::endl;
	}

	if (this->_energyPoints == this->_maxEnergyPoints)
	{
		std::cout << "<"<<this->_name<<"> EP is full!"<<std::endl;
	}
	else
	{
		this->_energyPoints += amount;
		if (this->_energyPoints > this->_maxEnergyPoints)
			this->_energyPoints = this->_maxEnergyPoints;
		std::cout << "<"<<this->_name<<">  got restored "<< this->_energyPoints<<" EP left!"<<std::endl;
	}
}

std::string FragTrap::_vaulthunterQuotes[5] = {
	"Kaaaaa...meeeeeee...haaaa...meee...HAAAAAAA!!!!!",
	"Yami Mahō... Yamimatoi... Jigengiri Higan!!",
	"United States of SMAASH!!",
	"SERIOUS PUNCH.",
	"Chidori"
};

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << " You out of energy" << std::endl;
		return;
	}
	this->_energyPoints -= 25;
	std::cout << "< "<<this->_name<<"> Used " << FragTrap::_vaulthunterQuotes[std::rand() % 5]<< "<"
	<< target << "> got hit *VROOOUUUUMMMMM*" << std::endl << "{<" << target
	<< "> recieved " << 50 - this->_armorDamageReduction << " damage points}"<<std::endl;

}

