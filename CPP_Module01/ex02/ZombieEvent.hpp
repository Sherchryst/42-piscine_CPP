/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:29:45 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 15:15:21 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent {

	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name) const;
		void	randomChump(void);	

	private:
		static std::string _zombieName[7];
		std::string _type;
};

#endif
