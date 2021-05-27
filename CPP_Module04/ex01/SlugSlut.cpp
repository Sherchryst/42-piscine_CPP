/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SlugSlut.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:38:22 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 13:58:24 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SlugSlut.hpp"

SlugSlut::SlugSlut(void): Enemy(170, "Super Mutant")
{
	std::cout<<"Gaaah. Me want to slut arround!"<<std::endl;
}

SlugSlut::SlugSlut(SlugSlut const & src): Enemy(src)
{
	std::cout<<"Gaaah. Me want to slut arround!"<<std::endl;
}

SlugSlut::~SlugSlut(void)
{
	std::cout<<"Aaaaargshlut..."<<std::endl;
}

void	SlugSlut::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->_hp -= dmg;
	this->_hp += 3;
	if (this->_hp < 0)
		this->_hp = 0;
}
