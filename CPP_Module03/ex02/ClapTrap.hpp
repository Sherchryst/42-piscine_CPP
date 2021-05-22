/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:26:48 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 15:52:44 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

	public:

		ClapTrap(int hit, int maxHit, int energy, int maxEnergy,
		int level, std::string name, int melee, int ranged, int armor);

		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap &	operator=(const ClapTrap &rhs);

		int	getHP(void) const;
		int	getEP(void) const;

		std::string	getName(void) const;

		void	levelUp(void);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		int	_hit;
		int	_maxHit;
		int	_energy;
		int	_maxEnergy;
		int	_level;
		std::string	_name;
		int	_melee;
		int	_ranged;
		int	_armor;

};


#endif
