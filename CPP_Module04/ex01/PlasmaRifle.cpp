/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:50:40 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:13:55 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src): AWeapon(src){}

PlasmaRifle::~PlasmaRifle(void) {}

void	PlasmaRifle::attack(void) const
{
	std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}
