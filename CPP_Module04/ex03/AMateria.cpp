/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:43:20 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 17:56:11 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type), _xp(0) {}

AMateria::AMateria(AMateria const & src): _type(src._type), _xp(src._xp) {}

AMateria::~AMateria(void) {}

std::string const &	AMateria::getType(void)const
{
	return this->_type;
}

unsigned int		AMateria::getXP(void)const
{
	return this->_xp;
}

void			AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

