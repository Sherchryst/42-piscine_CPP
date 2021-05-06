/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:05:52 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 20:06:44 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::~Zombie(void)
{
	std::cout <<"<" << this->_name << " (" << this->_type << ")> "
	<< "WROOOOOOOOOM *TURN INTO DUST*" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout <<"<" << this->_name << " (" << this->_type << ")> "
	<< "GREEEEEUUUU,  Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}
