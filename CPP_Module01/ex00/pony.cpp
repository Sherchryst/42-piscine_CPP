/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:44:39 by sgah              #+#    #+#             */
/*   Updated: 2021/05/03 23:49:05 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::Pony(std::string name): _name(name)
{
	std::cout << "My beautifull little pony called " << this->_name
	<< " wake up in hell." << std::endl;

}

Pony::~Pony(void)
{
	std::cout << this->_name <<" died in unbelievable pain" << std::endl;
}

void	Pony::ponyInHell(void) const
{
	std::cout << this->_name << " look around him and saw the desaster"
	<< std::endl << "He started to run away!" << std::endl
	<< "But to late he got catch by the deamons that was summon on earth"
	<< std::endl;
}
