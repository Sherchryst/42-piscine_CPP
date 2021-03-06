/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:12:54 by sgah              #+#    #+#             */
/*   Updated: 2021/05/02 17:38:13 by sgah             ###   ########.fr       */
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

std::string	Contact::getnamefield(int i) const
{
	return this->_name_field[i];
}

std::string	Contact::getfield(int i) const
{
	return this->_field[i];
}

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
			std::cout << std::setw(10) << std::setfill(' ') << " "
			<< "[" << i + 1 << "/" << FIELD_COUNT << "] -"
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
