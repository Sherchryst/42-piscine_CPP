/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:23:05 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 13:11:05 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>

class AWeapon {

	public:

		AWeapon(std::string const & name, int apcost, int damage);

		AWeapon(AWeapon const & src);
		virtual ~AWeapon(void);

		std::string const	getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;

		virtual void	attack(void) const = 0;

		AWeapon &	operator=(const AWeapon &rhs);


	protected:
		
		std::string const	_name;
		int					_cost;
		int					_dmg;


};


#endif
