/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 23:13:05 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 14:03:20 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void){}
Brain::~Brain(void){}

std::string	Brain::identify(void) const
{
	std::stringstream ss;

	ss << (void *)this;
	return ss.str();
}
