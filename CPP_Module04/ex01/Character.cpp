/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:51:07 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 18:13:31 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _ap(40), _name(name)
{

}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void) {}

