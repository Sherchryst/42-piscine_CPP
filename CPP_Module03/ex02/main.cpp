/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 00:23:01 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 14:32:36 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout
	<<" ____  __  __ _   __  __  __ _ "<<std::endl
	<<"(    \\/  \\(  ( \\_(  )/  \\(  ( \\"<<std::endl
	<<" ) D (  O /    / \\) (  O /    /"<<std::endl
	<<"(____/\\__/\\_)__\\____/\\__/\\_)__)"<<std::endl;

	std::cout<< "Usage: you got 4 commande: heal, sword, blast, berzerk and chall for guardian."
	<<std::endl << "\tHAVE FUN!!!"<<std::endl<<std::endl;

	std::string input;
	std::cout<< "Player1 name: ";
	std::getline(std::cin, input);
	FragTrap *p1 = new FragTrap(input);

	ScavTrap *p2 = new ScavTrap("Barthez");

	int turn = 0;

	while (p2->getHP() != 0 && p1->getHP() != 0)
	{
		turn++;

		while (turn % 2 == 0)
		{
			std::cout<<std::endl;
			std::cout<<p1->getName()<<"> ";
			std::getline(std::cin, input);
			if(!input.compare("heal"))
			{
				p1->beRepaired(30);
				break;
			}
			if(!input.compare("sword"))
			{
				if(p1->getEP() >= 20)	
					p2->takeDamage(20);
				p1->meleeAttack(p2->getName());
				break;
			}
			if(!input.compare("blast"))
			{
				if(p1->getEP() >= 30)	
					p2->takeDamage(20);
				p1->rangedAttack(p2->getName());
				break;
			}
			if(!input.compare("berzerk"))
			{
				if(p1->getEP() >= 25)	
					p2->takeDamage(50);
				p1->vaulthunter_dot_exe(p2->getName());
				break;
			}
			std::cout<<std::endl;
		}

		while (turn % 2 == 1)
		{
			std::cout<<std::endl;
		        std::cout<<p2->getName()<<"> ";
		        std::getline(std::cin, input);
		        if(!input.compare("heal"))
			{
		                p2->beRepaired(30);
				break;
			}
		        if(!input.compare("sword"))
		        {
				if(p2->getEP() >= 10)	
		                	p1->takeDamage(20);
		                p2->meleeAttack(p1->getName());
				break;
		        }
		        if(!input.compare("blast"))
		        {
				if(p2->getEP() >= 10)	
		                	p1->takeDamage(15);
		                p2->rangedAttack(p1->getName());
				break;
		        }
		        if(!input.compare("chall"))
		        {
		                p2->challengeNewcomer(p1->getName());
				break;
		        }
			std::cout<<std::endl;
		}


	}
	std::cout<<std::endl;

	if (p1->getHP() != 0)
	{
		std::cout << "You defeat the guardian!"<<std::endl;
		delete p2;
		p2 = NULL;
		std::cout<<std::endl;
		std::cout << "*Little rat bite you*"<<std::endl;
		delete p1;
		p1 = NULL;
	}
	else if (p2->getHP() != 0 && p1 && p2)
	{
		std::cout << "LOSER should die!"<<std::endl;
		delete p1;
		std::cout << "You are fired!!"<< std::endl;
		delete p2;
	}
}
