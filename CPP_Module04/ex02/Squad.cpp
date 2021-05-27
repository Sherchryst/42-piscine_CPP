/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:47:04 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 16:54:04 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): count(0)
{
	units = new ISpaceMarine *[0];
}

Squad::Squad(Squad const & src)
{
	*this = src;
}

Squad & Squad::operator=(const Squad &rhs)
{
	std::cout << "Copy" << std::endl;
	for (int i = 0; i < this->count; i++)
		delete this->units[i];
	delete []this->units;
	this->units = 0;
	this->count = 0;
	for (int i = 0; i < rhs.getCount(); i++)
		this->push(rhs.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->count; i++)
		delete this->units[i];
	delete [] this->units;
	this->units = NULL;
}

int		Squad::getCount(void)const
{
	return (this->count);
}

ISpaceMarine*	Squad::getUnit(int i)const
{
	if (i >= this->count && i < 0)
		return (NULL);
	return (this->units[i]);
}

int		Squad::push(ISpaceMarine* elem)
{
	if(!elem)
		return this->count;
	for(int i = 0; i < this->count; i++)
		if (units[i] == elem)
			return this->count;
	ISpaceMarine **tmp = new ISpaceMarine *[this->count + 1];
	for (int i = 0; i < this->count; i++)
		tmp[i] = this->units[i];
	if (this->units != 0)
		delete [] this->units;
	tmp[this->count++] = elem;
	this->units = tmp;
	return (this->count);
}

