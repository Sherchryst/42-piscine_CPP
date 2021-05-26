/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:45:49 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 17:50:25 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy {

	public:

		RadScorpion(void);

		RadScorpion(RadScorpion const & src);
		~RadScorpion(void);

		RadScorpion &	operator=(const RadScorpion &rhs);

};


#endif
