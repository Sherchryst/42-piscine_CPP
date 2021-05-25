/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:44:24 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 23:02:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name):
	_name(name)
{
	std::cout<<"Some random victim called "<< name <<" just appeared!"<<std::endl;
}

Victim::Victim(Victim const & src):
	_name(src._name)
{
	std::cout<<"Some random victim called "<< this->_name <<" just appeared!"<<std::endl;
}

Victim::~Victim(void)
{
	std::cout<<"Victim "<< this->_name <<" just died for no apparent reason!"<<std::endl;
}

void	Victim::intro(void)const
{
	std::cout<<"I'm "<< this->_name <<" and I like otters!"<<std::endl;
}

std::string	Victim::getName(void)const
{
	return this->_name;
}

void	Victim::getPolymorphed(void)const
{
	std::cout<< this->_name <<" has been turned into a cute little sheep!"<<std::endl;
}

std::ostream &  operator<<(std::ostream & o, Victim const &rhs)
{
	std::cout<<"I'm "<< rhs.getName() <<" and I like otters!"<<std::endl;
	return o;
}
