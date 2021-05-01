/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:42:15 by sgah              #+#    #+#             */
/*   Updated: 2021/05/02 00:47:31 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "book.hpp"

Book::Book(void) : _count(0) {}
Book::~Book(void) {}

int	Book::getcount(void) const
{
	return this->_count;
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
		std::cout << std::setw(9) << field << ".";
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
	std::cout << std::endl << std::setw(10) << std::setfill(' ');
	std::cout<< std::setw(40) << std::setfill('-');
	
	for(int i = 0; i < _count; i++)
	{
		Contact ct = this->_contact[i];

		std::cout << std::setw(10) << std::setfill(' ') << "|";
		this->displayfield(std::to_string(i));
		this->displayfield(ct.getfield(0));
		this->displayfield(ct.getfield(1));
		this->displayfield(ct.getfield(2));
		std::cout << std::endl << std::setw(10) << std::setfill(' ');
		std::cout << std::setw(40) << std::setfill('-');
	}
	std::cout << std::endl;
}
