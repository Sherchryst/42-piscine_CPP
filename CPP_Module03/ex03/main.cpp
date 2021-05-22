/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 00:23:01 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 18:56:40 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	std::cout<<std::endl<<"FragTrap Testing"<<std::endl;
	FragTrap ft("KNIGHT");

	for (int i = 0; i < 7; i++)
		ft.takeDamage(30);

	for (int i = 0; i < 7; i++)
		ft.beRepaired(20);

	ft.rangedAttack("foo");
	ft.meleeAttack("bar");

	ft.beRepaired(100);
	for (int i = 0; i < 10; i++)
	{
		ft.vaulthunter_dot_exe("Enemy");
	}

	std::cout<<std::endl<<"ScavTrap Testing"<<std::endl;
	ScavTrap st("Barthez");

	for (int i = 0; i < 7; i++)
		st.takeDamage(30);

	for (int i = 0; i < 7; i++)
		st.beRepaired(20);

	st.rangedAttack("bar");
	st.meleeAttack("foo");

	for (int i = 0; i < 5; i++)
		st.challengeNewcomer("KNIGHT");

	std::cout<<std::endl<<"NinjaTrap Testing"<<std::endl;
	NinjaTrap n("NINJA");

	for (int i = 0; i < 7; i++)
		n.takeDamage(20);

	for (int i = 0; i < 7; i++)
		n.beRepaired(20);

	n.ninjaShoebox(ft);
	n.ninjaShoebox(st);

	ClapTrap t(10, 10, 10, 10, 1,"Pony", 10, 10, 10);
	n.ninjaShoebox(t);
	n.ninjaShoebox(n);
}
