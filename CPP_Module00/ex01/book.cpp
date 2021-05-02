/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:42:15 by sgah              #+#    #+#             */
/*   Updated: 2021/05/02 17:43:00 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "book.hpp"

Book::Book(void) : _count(0) {}
Book::~Book(void) {}

int	Book::getcount(void) const
{
	return this->_count;
}

Contact	Book::getcontact(int i) const
{
	return this->_contact[i];
}

void	Book::setcontact(Contact newcontact)
{
	if (this->_count >= 8)
		return ;
	this->_contact[this->_count++] = newcontact;
}

void	Book::displayfield(std::string field) const
{
	if (field.size() > 10)
		std::cout << std::setw(9) << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
	std::cout << "|";
}

void	Book::list(void)
{
	std::cout << std::setw(10) << std::setfill(' ') << "|";
	this->displayfield("Index");
	this->displayfield("First Name");
	this->displayfield("Last Name");
	this->displayfield("Nickname");
	std::cout << std::endl;	
	for(int i = 0; i < _count; i++)
	{
		Contact ct = this->_contact[i];

		std::cout << std::setw(10) << std::setfill(' ') << "|";
		this->displayfield(static_cast<std::ostringstream*>( &(std::ostringstream() << i + 1) )->str());
		this->displayfield(ct.getfield(0));
		this->displayfield(ct.getfield(1));
		this->displayfield(ct.getfield(2));
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
