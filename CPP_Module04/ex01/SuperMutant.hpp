/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:38:22 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:45:14 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy {

	public:

		SuperMutant(void);

		SuperMutant(SuperMutant const & src);
		virtual ~SuperMutant(void);

		SuperMutant &	operator=(const SuperMutant &rhs);

		virtual void	takeDamage(int dmg);
};


#endif
