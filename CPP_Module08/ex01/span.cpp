/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:28:31 by sgah              #+#    #+#             */
/*   Updated: 2021/06/17 11:32:47 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <limits.h>

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
	if(std::find(this->lst.begin(), this->lst.end(), n) != this->lst.end())
		throw ValueAlreadyExistException();

	this->lst.push_back(n);
}

long			span::shortestSpan(void)
{
	if (this->lst.size() <= 1)
		throw std::exception();

	long	min = INT_MAX;
	long	diff;

	std::vector<int> tmp = this->lst;
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::iterator prev = tmp.begin();
	std::vector<int>::iterator it = tmp.begin() + 1;
	for (; it != tmp.end(); it++)
	{
		diff = std::abs(static_cast<long>(*it) - static_cast<long>(*prev));
		if (diff < min)
			min = diff;
		prev = it;
	}

	return (min);
}

long		span::longestSpan(void)
{

	return (static_cast<long>(*std::max_element(this->lst.begin(), this->lst.end())) -
			static_cast<long>(*std::min_element(this->lst.begin(), this->lst.end())));
}

typedef span::TooMuchValueException TooMuchValueException;

const char	*TooMuchValueException::what(void) const throw()
{
	return ("Too much value");
}

typedef span::ValueAlreadyExistException ValueAlreadyExistException;

const char	*ValueAlreadyExistException::what(void) const throw()
{
	return ("Value already exist");
}
