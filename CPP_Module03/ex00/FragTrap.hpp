/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/19 19:49:53 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap {

	public:

		FragTrap(std::string Name);

		FragTrap(FragTrap const & src);
		~FragTrap(void);
		
		void	rangedAttack(std::string const & target) const;
		void	meleeAttack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		int	_hitPoint;
		int	_maxHitPoints;
		int	_energyPoints;
		int	_maxEnergyPoints;
		int	_Level;
		std::string	_name;
		int	_meleeAttackDamage;
		int	_rangedAttackDamage;
		int	_amorDamageReduction;

};


#endif
