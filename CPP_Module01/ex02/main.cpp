/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:24:19 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 18:15:23 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent WalkingDead;
	
	std::cout << "Dead presidents raising!!!" << std::endl;
	WalkingDead.setZombieType("Roamers");
	Zombie *Z1 = WalkingDead.newZombie("d'Estaing");
	Zombie *Z2 = WalkingDead.newZombie("de Gaulle");
	std::cout << "kill them!!" << std::endl;
	delete Z1;
	delete Z2;
	std::cout << std::endl << "Random celebrities raising!!!" << std::endl;
	WalkingDead.setZombieType("Ghoul");
	for (int i = 0; i < 7; i++)
		WalkingDead.randomChump();
}
