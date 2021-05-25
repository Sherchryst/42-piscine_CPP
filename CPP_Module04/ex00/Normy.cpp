/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Normy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 22:32:45 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 22:35:28 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Normy.hpp"

Normy::Normy(std::string name):
	Victim(name)
{
	std::cout << name << ": Hello." << std::endl;
}

Normy::Normy(Normy const & src):
	Victim(src)
{
	std::cout << this->_name << ": Hello." << std::endl;
}

Normy::~Normy(void)
{
	std::cout << "I'm dead..." << std::endl;
}

void Normy::getPolymorphed(void) const
{
	std::cout << this->_name << " was just polymorphed into a larva!" << std::endl;
}

