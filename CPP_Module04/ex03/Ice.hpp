/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:57:38 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 18:47:11 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria {

	public:

		Ice(void);

		Ice(Ice const & src);
		~Ice(void);

		Ice &	operator=(const Ice &rhs);

		AMateria* clone(void) const;
		void use(ICharacter &target);
};


#endif
