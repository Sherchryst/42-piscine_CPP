/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:38:22 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:45:17 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout<<"Gaaah. Me want smash heads!"<<std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src): Enemy(src)
{
	std::cout<<"Gaaah. Me want smash heads!"<<std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout<<"Aaargh..."<<std::endl;
}

void	SuperMutant::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->_hp -= dmg;
	this->_hp += 3;
	if (this->_hp < 0)
		this->_hp = 0;
}
