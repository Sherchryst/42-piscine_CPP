/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:05:37 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 19:53:15 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	
	public:

		Zombie(void);
		~Zombie(void);

		void	setName(std::string name);
		void	setType(std::string type);

		void	announce(void) const;

	private:
		std::string _name;
		std::string _type;

};

#endif
