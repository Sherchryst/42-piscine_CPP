/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:17:11 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 14:33:13 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){}
Human::~Human(void){}

std::string	Human::identify(void) const
{
	return this->_brain.identify();
}

Brain const &	Human::getBrain(void) const
{
	return this->_brain;
}
