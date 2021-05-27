/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:27:04 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 14:09:03 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Ak47.hpp"
#include "SlugSlut.hpp"

int main(void)
{
	Character* player = new Character("Micheal");
	std::cout << *player;
	Enemy* scorpion = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* ak = new Ak47();
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
	std::cout << "-- Player is now resting... --" << std::endl;
	player->recoverAP();
	player->recoverAP();
	std::cout << *player;
	std::cout << "-- Oh no! A SlugSlut has appeared! --" << std::endl;
	Enemy* slut = new SlugSlut();
	player->attack(slut);
	std::cout << "-- The player weapon broke, he grabes another! --" << std::endl;
	player->equip(ak);
	std::cout << *player;
	player->attack(slut);
	player->attack(slut);
	player->attack(slut);
	std::cout << *player;
	std::cout << "-- The player Win. --" << std::endl;


	delete pr;
	delete pf;
	delete ak;
	delete player;
	return (0);
}

