/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:00:11 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 17:50:55 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string Name):
	ClapTrap(60, 60, 120, 120, 1, Name, 60, 5, 0)
{
	std::cout<<"<"<<Name<<"> Raised from the shadow"<<std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src):
	ClapTrap(src)
{
	std::cout<<"<"<<this->_name<<"> Raised from the shadow"<<std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout<<"<"<<this->_name<<"> Throwback into shadow"<<std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->_energy >= 10)
	{
		this->_energy -= 10;
		std::cout << "<" << this->_name << "> Used Shuriken(Ranged Attack) *FHOUM* " << "<"
		<< target << "> got shoot *BOOM*" << std::endl << "{<" << target
		<< "> recieved " << this->_ranged << " damage points}"<<std::endl;
	}
	else
		std::cout << "You out of Energy!"<<std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->_energy >= 30)
	{
		this->_energy -= 30;
		std::cout << "<" << this->_name << "> Used Kenjutsu(Melee Attack) *SLAAAAASH* " << "<"
		<< target << "> got hit *BAM*" << std::endl << "{<" << target
		<< "> recieved " << this->_melee << " damage points}"<<std::endl;
	}
	else
		std::cout<<"You out of Energy"<<std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "<"<<this->_name<<"> Used Tsukuyomi (Genjutsu)"<<std::endl;
	while (trap.getHP() != 0)
		trap.takeDamage(20);
	std::cout << "Our lives are so brief and unimportant."<<std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "<"<<this->_name<<"> Used Raikiri (Raiton)"<<std::endl;
	while (frag.getHP() != 0)
		frag.takeDamage(40);
	std::cout << "Our lives are so brief and unimportant."<<std::endl;
}
void	NinjaTrap::ninjaShoebox(ScavTrap & scav)
{
	std::cout << "<"<<this->_name<<"> Used  Genkai Hakuri no Jutsu (Jinton)"<<std::endl;
	while (scav.getHP() != 0)
		scav.takeDamage(400);
	std::cout << "Our lives are so brief and unimportant."<<std::endl;
}
void	NinjaTrap::ninjaShoebox(NinjaTrap & ninja)
{
	std::cout << "<"<<this->_name<<"> Usd Chibaku Tensei (XXXXXX)"<<std::endl;
	while (ninja.getHP() != 0)
		ninja.takeDamage(2000);
	std::cout << "Our lives are so brief and unimportant."<<std::endl;
}
