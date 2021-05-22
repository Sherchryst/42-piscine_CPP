/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:56:04 by sgah              #+#    #+#             */
/*   Updated: 2021/05/22 22:32:12 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include <iostream>
# include "SuperTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public virtual FragTrap, public virtual NinjaTrap {

	public:

		SuperTrap(std::string name);

		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);
		
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		SuperTrap &	operator=(const SuperTrap &rhs);
};


#endif
