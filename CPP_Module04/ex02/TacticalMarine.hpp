/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:27:57 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 16:57:58 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {

	public:

		TacticalMarine(void);

		TacticalMarine(TacticalMarine const & src);
		~TacticalMarine(void);

		TacticalMarine &	operator=(const TacticalMarine &rhs);

		TacticalMarine*	clone(void) const;
		void		battleCry(void)const;
		void		rangedAttack(void)const;
		void		meleeAttack(void)const;

};


#endif
