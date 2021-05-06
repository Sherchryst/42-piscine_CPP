/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:54:09 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 19:55:01 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde {
	
	public:

	ZombieHorde(int n);
	~ZombieHorde(void);

		void	announce(void) const;

	private:

		std::string	_type;
		Zombie*		_horde;
		int		_count;

		static std::string	_zombieName[5];
};

#endif
