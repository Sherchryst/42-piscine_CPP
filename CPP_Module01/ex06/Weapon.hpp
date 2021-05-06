/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:39:42 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 19:10:06 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {

	public:

	Weapon(std::string type);
	~Weapon(void);

		void			setType(std::string type);
		std::string const &	getWeapon(void) const;

	private:

		std::string	_type;
};

#endif
