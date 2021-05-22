/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:29:32 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 16:13:18 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include  <cstdlib>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	public:

		FragTrap(std::string Name);

		FragTrap(FragTrap const & src);
		~FragTrap(void);
		
		FragTrap &	operator=(const FragTrap &rhs);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void 	vaulthunter_dot_exe(std::string const & target);

	private:

		static std::string _vaulthunterQuotes[5];
};


#endif
