/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:42:15 by sgah              #+#    #+#             */
/*   Updated: 2021/05/01 21:47:24 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

