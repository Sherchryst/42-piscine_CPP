/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 17:00:11 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 17:50:23 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {

	public:

		NinjaTrap(std::string Name);

		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap &	operator=(const NinjaTrap &rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	ninjaShoebox(ClapTrap & clap);
		void	ninjaShoebox(FragTrap & frag);
		void	ninjaShoebox(ScavTrap & scav);
		void	ninjaShoebox(NinjaTrap & ninja);
};


#endif
