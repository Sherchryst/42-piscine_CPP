/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:45:49 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:50:27 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout<<"* click click click *"<<std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src): Enemy(src)
{
	std::cout<<"* click click click *"<<std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout<<"* SPROTCH *"<<std::endl;
}

