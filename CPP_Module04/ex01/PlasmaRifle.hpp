/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:50:40 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:09:30 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon{

	public:

		PlasmaRifle(void);

		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle(void);

		PlasmaRifle &	operator=(const PlasmaRifle &rhs);

		virtual void attack(void) const;

};


#endif
