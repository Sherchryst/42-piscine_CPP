/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:27:57 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 17:06:18 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout<<"* teleports from space *"<<std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	std::cout<< "* teleports from space *"<<std::endl;
	*this = src;
}

AssaultTerminator &        AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout<<"I’ll be back..."<<std::endl;
}

AssaultTerminator*	AssaultTerminator::clone(void)const
{
	return (new AssaultTerminator);
}

void		AssaultTerminator::battleCry(void)const
{
	std::cout<<"This code is unclean. PURIFY IT!"<<std::endl;
}

void		AssaultTerminator::rangedAttack(void)const
{
	std::cout<<"* does nothing *"<<std::endl;
}

void		AssaultTerminator::meleeAttack(void)const
{
	std::cout<< "* attacks with chainfists *"<<std::endl;
}

