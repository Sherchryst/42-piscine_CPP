/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:05:37 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 18:37:57 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
	
	public:

		Zombie(std::string Name, std::string Type);
		~Zombie(void);

		std::string	getName(void) const;	
		std::string	getType(void) const;

		void	announce(void) const;

	private:
		std::string _name;
		std::string _type;

};

#endif
