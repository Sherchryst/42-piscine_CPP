/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:48:28 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 22:28:58 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name):
	Victim(name)
{
	std::cout << name << ": Zog zog." << std::endl;
}

Peon::Peon(Peon const & src):
	Victim(src)
{
	std::cout << this->_name << ": Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " was just polymorphed into a pink pony!" << std::endl;
}

