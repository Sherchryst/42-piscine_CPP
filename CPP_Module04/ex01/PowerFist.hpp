/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:09:47 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:18:17 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {

	public:

		PowerFist(void);

		PowerFist(PowerFist const & src);
		virtual ~PowerFist(void);

		PowerFist &	operator=(const PowerFist &rhs);
		
		virtual void attack(void) const;
};


#endif
