/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:56:04 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 22:38:50 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(std::string name):
	ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5),
	FragTrap(name), NinjaTrap(name)
{
	std::cout<<"<"<<this->_name<<"> I'm going to kill you all!"<<std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src):
	ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
	std::cout<<"<"<<this->_name<<"> I'm going to kill you all!"<<std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout<<"I'm not dead... Is the death who is "<<this->_name<<"!"<<std::endl;
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

