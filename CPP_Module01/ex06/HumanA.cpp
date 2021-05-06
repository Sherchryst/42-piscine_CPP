/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:40:57 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 18:56:38 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon & type): _name(name), _weapon(type){}
HumanA::~HumanA(void){}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon.getWeapon()
	<< std::endl;
}
