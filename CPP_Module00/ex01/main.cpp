/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:48:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/01 14:34:13 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

int main()
{
	Contact ct;
	std::string cmd;

	cmd = "";
	std::cout << "Welcome to the most useless Phonebook." << std::endl;
	std::cout << "ps: He is really BAD!" << std::endl << std::endl;

	while(cmd.compare("EXIT") != 0)
	{
		//print prompt and wait for command
		std::cout << "Phonebook> ";
		getline(std::cin, cmd);

		if (!std::cin.good())
			return (1);
		if (cmd.compare("ADD") == 0)
			ct.addcontact();
	}
}
