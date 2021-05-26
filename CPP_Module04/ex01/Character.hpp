/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:51:07 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 18:13:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>

class Character {

	public:

		Character(std::string const & name);

		Character(Character const & src);
		~Character(void);

		Character &	operator=(const Character &rhs);

		void	recoverAP(void);
		void	equip(AWeapon* wp);
		void	attack(Enemy* nmy);

		std::string const &	getName(void) const;

	private:

		std::string const &	_name;
		int					_ap;
		AWeapon*			_wp;

};


#endif
