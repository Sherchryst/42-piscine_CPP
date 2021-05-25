/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 22:56:49 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 23:21:43 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Normy.hpp"
#include "Peon.hpp"
#include "ThisIsStupide.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    ThisIsStupide stupid("Stupid");
    Normy norm("Norm");
    std::cout << robert << jim << joe << norm << stupid;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(norm);
    robert.polymorph(stupid);
    return 0;
}
