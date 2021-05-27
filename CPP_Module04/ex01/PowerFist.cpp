/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:09:47 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 13:28:28 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("PowerFist", 5, 50) {}

PowerFist::PowerFist(PowerFist const & src): AWeapon(src) {}

PowerFist::~PowerFist(void) {}

void	PowerFist::attack(void) const
{
	std::cout<<"* pschhh... SBAM! *"<<std::endl;
}

