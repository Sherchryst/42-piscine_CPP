/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/18 16:08:45 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap {

	public:

		FragTrap(void);

		FragTrap(FragTrap const & src);
		~FragTrap(void);
		
		void	Ranged

	private:
		int	_hitPoints;
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
