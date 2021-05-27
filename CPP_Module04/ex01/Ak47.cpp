/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ak47.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:09:47 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 14:01:21 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ak47.hpp"

Ak47::Ak47(void): AWeapon("Ak47", 5, 50) {}

Ak47::Ak47(Ak47 const & src): AWeapon(src) {}

Ak47::~Ak47(void) {}

void	Ak47::attack(void) const
{
	std::cout<<"* KAKAKAKAKAKKAKAKAKAKAKAKAKKAKA! *"<<std::endl;
}

