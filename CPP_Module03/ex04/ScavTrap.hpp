
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:22:23 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 16:05:22 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include  <cstdlib>
# include "ClapTrap.hpp"


class ScavTrap: public ClapTrap {

	public:

		ScavTrap(std::string Name);

		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap &	operator=(const ScavTrap &rhs);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	challengeNewcomer(std::string const & target);

	private:

		static std::string _chall[5];
};


#endif
