/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:57:38 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 18:53:48 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure: public AMateria {

	public:

		Cure(void);

		Cure(Cure const & src);
		virtual ~Cure(void);

		Cure &	operator=(const Cure &rhs);

		AMateria*	clone(void) const;
		void 		use(ICharacter &target);
};


#endif
