/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:05:52 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 15:41:11 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type): _name(Name), _type(Type)
{
	this->announce();
}
Zombie::~Zombie(void)
{
	std::cout <<"<" << this->_name << " (" << this->_type << ")> "
	<< "BANG! SPLAAAASH *HEADSHOTED*" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout <<"<" << this->_name << " (" << this->_type << ")> "
	<< "GREEEEEUUUU,  Braiiiiiiinnnssss ..." << std::endl;
}

std::string	Zombie::getName(void) const
{
	return this->_name;
}

std::string	Zombie::getType(void) const
{
	return this->_type;
}
