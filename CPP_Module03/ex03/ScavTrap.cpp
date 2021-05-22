/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:22:23 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 16:10:57 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) :
	ClapTrap(100, 100, 50, 50, 1, Name, 20, 15, 3)
{
	std::cout<<"<"<<this->_name<<"> You shall not pass!"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs):
	ClapTrap(rhs)
{
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
	std::cout << "<"<<target<<"> *ignored the Challenge*" << std::endl;
}
