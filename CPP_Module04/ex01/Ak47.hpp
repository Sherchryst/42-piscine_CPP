/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ak47.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:09:47 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 14:02:01 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AK47_H
# define AK47_H

# include <iostream>
# include "AWeapon.hpp"

class Ak47: public AWeapon {

	public:

		Ak47(void);

		Ak47(Ak47 const & src);
		virtual ~Ak47(void);

		Ak47 &	operator=(const Ak47 &rhs);
		
		virtual void attack(void) const;
};


#endif
