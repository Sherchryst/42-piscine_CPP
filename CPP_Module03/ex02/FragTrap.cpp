/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 16:21:30 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name):
	ClapTrap(100, 100, 100, 100, 1, Name, 20, 20, 5)
{
	std::cout<<"<"<<this->_name<<"> is Ready to fight!"<<std::endl;
}

FragTrap::FragTrap(FragTrap const & rhs):
	ClapTrap(rhs)
{
	std::cout<<"<"<<this->_name<<"> is Ready to fight!"<<std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Omae wa mou shindeiru"<<std::endl;
	std::cout << "<"<<this->_name<<"> NANIII *KABOOOOM*" << std::endl; 
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_energy >= 30)
	{
		this->_energy -= 30;
		std::cout << "<" << this->_name << "> Used Mega Blaster(Ranged Attack) *PIIOOOUUU* " << "<"
		<< target << "> got shoot *BOOM*" << std::endl << "{<" << target
		<< "> recieved " << this->_ranged - 3 << " damage points}"<<std::endl;
	}
	else
		std::cout << "You out of Energy!"<<std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_energy >= 20)
	{
		this->_energy -= 20;
		std::cout << "<" << this->_name << "> Used Laser Blade(Melee Attack) *SLAAAAASH* " << "<"
		<< target << "> got hit *BAM*" << std::endl << "{<" << target
		<< "> recieved " << this->_melee - 3<< " damage points}"<<std::endl;
	}
	else
		std::cout<<"You out of Energy"<<std::endl;
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
	if (this->_energy < 25)
	{
		std::cout << " You out of energy" << std::endl;
		return;
	}
	this->_energy -= 25;
	std::cout << "< "<<this->_name<<"> Used " << FragTrap::_vaulthunterQuotes[std::rand() % 5]<< "<"
	<< target << "> got hit *VROOOUUUUMMMMM*" << std::endl << "{<" << target
	<< "> recieved " << 50 - 3 << " damage points}"<<std::endl;

}

