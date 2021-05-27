/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:27:57 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 17:06:38 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

	public:

		AssaultTerminator(void);

		AssaultTerminator(AssaultTerminator const & src);
		~AssaultTerminator(void);

		AssaultTerminator &	operator=(const AssaultTerminator &rhs);

		AssaultTerminator*	clone(void) const;
		void		battleCry(void)const;
		void		rangedAttack(void)const;
		void		meleeAttack(void)const;

};


#endif
