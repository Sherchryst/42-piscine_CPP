/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:22:23 by sgah              #+#    #+#             */
/*   Updated: 2021/05/21 21:30:01 by sgah             ###   ########.fr       */
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

		ScavTrap &	operator=(const ScavTrap &rhs);
		
		void	challengeNewcomer(std::string const & target);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

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
