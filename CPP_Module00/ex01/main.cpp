/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:48:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/02 18:19:07 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "book.hpp"

int main()
{
	Book db;
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
			continue ;

		if (cmd.compare("ADD") == 0)
		{
			if (db.getcount() >= 8)
			{
				std::cout << "Error: I TOLD YOU IS REALLY BAD"
				<< ". The phonebook is full: 8 contact max"
				<< std::endl;
				continue ;
			}

			Contact ct;

			ct.addcontact();
			db.setcontact(ct);
		}

		if (cmd.compare("SEARCH") == 0)
		{
			db.list();

			if (db.getcount() == 0)
				continue ;
			std::cout << "type in the contact index: ";
			int index;

			std::getline(std::cin, cmd);

			if (!std::cin.good())
				continue ;   


			std::istringstream iss(cmd);
  			iss >> index;

			if (index <= 0 || index > db.getcount())
				continue ;
			Contact c;

			c = db.getcontact(index - 1);
			for (int i = 0; i < FIELD_COUNT; i++)
			{
				std::cout << std::setw(10) << std::setfill(' ') << " ";
				std::cout << c.getnamefield(i) << ": " << c.getfield(i)
				<< std::endl;
			}
		}
	}
}
