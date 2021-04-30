/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:48:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/01 01:14:47 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
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
			exit(0);
	}
}
