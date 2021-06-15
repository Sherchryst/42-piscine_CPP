/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:28:31 by sgah              #+#    #+#             */
/*   Updated: 2021/06/15 19:57:43 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(unsigned int N): _n(N) {}

span::span(span const & src)
{
	*this = src;
}

span::~span(void) {}

span &		span::operator=(const span &rhs)
{
	this->lst = rhs.lst;
	this->_n = rhs._n;
	return (*this);
}

void		span::addNumber(int n)
{
	if(this->_n == this->lst.size())
		throw TooMuchValueException();

	this->lst.push_back(n);
}

typedef span::TooMuchValueException TooMuchValueException;

const char	*TooMuchValueException::what(void) const throw()
{
	return ("Too much value");
}
