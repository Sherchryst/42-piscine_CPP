/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:12:54 by sgah              #+#    #+#             */
/*   Updated: 2021/05/01 17:48:50 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string Contact::_name_field[FIELD_COUNT] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"E-mail address",
	"Phone number",
	"Birthday date",
	"Favorite meal",
	"Underwear color",
	"Darkest secret"
};

void	Contact::setfield(int i, std::string value)
{
	this->_field[i] = value;
}

void	Contact::addcontact(void)
{
	std::cout << "Add a new contact!" << std::endl;

	for(int i = 0; i < FIELD_COUNT; i++)
	{
		std::string input = "";

		while (input.compare("") == 0)
		{
			std::cout << "[" << i + 1 << "/" << FIELD_COUNT << "] -"
			<< this->_name_field[i] << ": ";

			std::getline(std::cin, input);

			if(!std::cin.good())
				return ;

			if(input.compare("") == 0)
				std::cout << "Error: empty field"<< std::endl;
		}
		
		this->setfield(i, input);
	}
}
