/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:22:23 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 14:19:40 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include  <cstdlib>


class ScavTrap {

	public:

		ScavTrap(std::string Name);

		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		
		int	getHP(void) const;
		int	getEP(void) const;

		std::string	getName(void) const;

		void	levelUp(void);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer(std::string const & target);

	private:
		int	_hit;
		int	_maxHit;
		int	_energy;
		int	_maxEnergy;
		int	_level;
		std::string	_name;
		int	_melee;
		int	_ranged;
		int	_armor;

		static std::string _chall[5];
};


#endif
