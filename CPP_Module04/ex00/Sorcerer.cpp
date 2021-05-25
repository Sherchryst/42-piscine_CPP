/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:12:48 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 21:55:37 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
	_name(name), _title(title)
{
	std::cout<< this->_name <<", "<< this->_title <<", is born!"<<std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src):
	_name(src._name), _title(src._title)
{
	std::cout<< this->_name <<", "<< this->_title <<", is born!"<<std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout<< this->_name <<", "<< this->_title <<", is dead. Consequences will never be the same!"
	<<std::endl;
}

void	Sorcerer::intro(void) const
{
	std::cout<<"I am "<< this->_name <<", "<< this->_title <<", and I like ponies!"<<std::endl;
}

void 	Sorcerer::polymorph(Victim const &rhs) const
{
	rhs.getPolymorphed();
}

std::string	Sorcerer::getName(void)const
{
	return this->_name;
}

std::string	Sorcerer::getTitle(void)const
{
	return this->_title;
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const &rhs)
{
	o <<"I am "<< rhs.getName() <<", "<< rhs.getTitle() <<", and I like ponies!"<<std::endl;
	return o;
}

