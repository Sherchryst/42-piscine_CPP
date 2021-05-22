/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 14:29:50 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include  <cstdlib>

class FragTrap {

	public:

		FragTrap(std::string Name);

		FragTrap(FragTrap const & src);
		~FragTrap(void);

		int	getHP(void) const;
		int	getEP(void) const;
		
		std::string	getName(void) const;

		void	levelUp(void);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void 	vaulthunter_dot_exe(std::string const & target);

	private:
		int	_hitPoint;
		int	_maxHitPoints;
		int	_energyPoints;
		int	_maxEnergyPoints;
		int	_level;
		std::string	_name;
		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_armorDamageReduction;

		static std::string _vaulthunterQuotes[5];

};


#endif
