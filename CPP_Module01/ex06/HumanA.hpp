/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:40:45 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 18:56:47 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {

	public:

	HumanA(std::string name, Weapon & type);
	~HumanA(void);

		void	attack(void) const;

	private:
		
		std::string	_name;
		Weapon&		_weapon;
};

#endif
