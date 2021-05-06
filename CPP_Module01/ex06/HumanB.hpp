/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:40:45 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 19:15:13 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {

	public:

	HumanB(std::string name);
	~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &type);

	private:
		
		std::string	_name;
		Weapon *	_weapon;
};

#endif
