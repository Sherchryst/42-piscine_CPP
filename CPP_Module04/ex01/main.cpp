/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:27:04 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 13:25:43 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(void)
{
	Character* player = new Character("Micheal");
	std::cout << *player;
	Enemy* scorpion = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	std::cout << "-- Player is choosing a weapon... --" << std::endl;
	player->equip(pr);
	std::cout << *player;
	player->equip(pf);
	std::cout << "-- Player is starting the assault against the scorpion! --" << std::endl;
	player->attack(scorpion);
	std::cout << *player;
	player->equip(pr);
	std::cout << *player;
	player->attack(scorpion);
	std::cout << *player;
	player->recoverAP();
	player->attack(scorpion);
	player->attack(scorpion);
	std::cout << *player;
	std::cout << "-- Player is now resting... --" << std::endl;
	player->recoverAP();
	player->recoverAP();
	std::cout << "-- Oh no! A mutant has appeared! --" << std::endl;
	Enemy* mutant = new SuperMutant();
	player->attack(mutant);
	std::cout << "-- The player weapon broke, he grabes another! --" << std::endl;
	player->equip(pf);
	std::cout << *player;
	player->attack(mutant);
	player->attack(mutant);
	player->attack(mutant);
	player->attack(mutant);
	std::cout << *player;
	std::cout << "-- The player has no energy left, he escapes. --" << std::endl;

	delete pr;
	delete pf;
	delete player;
	delete mutant;
	return (0);
}

