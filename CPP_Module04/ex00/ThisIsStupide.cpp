/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThisIsStupide.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 23:14:17 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 23:17:21 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ThisIsStupide.hpp"

ThisIsStupide::ThisIsStupide(std::string name):
	Victim(name)
{
	std::cout << name << ": This is really stupid...." << std::endl;
}

ThisIsStupide::ThisIsStupide(ThisIsStupide const & src):
	Victim(src)
{
	std::cout << this->_name << ": This is really stupid." << std::endl;
}

ThisIsStupide::~ThisIsStupide(void)
{
	std::cout << "BLA BLA BLA Bon le destructeur est appelé c'est bon?" << std::endl;
}

void ThisIsStupide::getPolymorphed(void) const
{
	std::cout << this->_name << " was just polymorphed into something more stupid" << std::endl;
}

