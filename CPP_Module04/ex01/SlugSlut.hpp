/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SlugSlut.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:38:22 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 13:56:59 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLUGSLUT_H
# define SLUGSLUT_H

# include <iostream>
# include "Enemy.hpp"

class SlugSlut: public Enemy {

	public:

		SlugSlut(void);

		SlugSlut(SlugSlut const & src);
		virtual ~SlugSlut(void);

		SlugSlut &	operator=(const SlugSlut &rhs);

		virtual void	takeDamage(int dmg);
};


#endif
