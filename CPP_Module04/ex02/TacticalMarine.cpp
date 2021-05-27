/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:27:57 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 16:52:03 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout<<"Tactical Marine ready for battle!"<<std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	std::cout<<"Tactical Marine ready for battle!"<<std::endl;
	*this = src;
}

TacticalMarine &        TacticalMarine::operator=(const TacticalMarine &rhs)
{
	(void)rhs;
	return (*this);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout<<"Aaargh..."<<std::endl;
}

TacticalMarine*	TacticalMarine::clone(void)const
{
	return (new TacticalMarine);
}

void		TacticalMarine::battleCry(void)const
{
	std::cout<<"For the holy PLOT!"<<std::endl;
}

void		TacticalMarine::rangedAttack(void)const
{
	std::cout<<"* attacks with a bolter *"<<std::endl;
}

void		TacticalMarine::meleeAttack(void)const
{
	std::cout<<"* attacks with a chainsword *"<<std::endl;
}

