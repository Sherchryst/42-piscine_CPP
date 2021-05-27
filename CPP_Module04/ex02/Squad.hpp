/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:47:03 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 15:50:35 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad: public ISquad {

	public:

		Squad(void);

		Squad(Squad const & src);
		~Squad(void);

		int getCount(void) const;
		ISpaceMarine* getUnit(int i) const;
		int push(ISpaceMarine* elem);

		Squad &	operator=(const Squad &rhs);

	private:

		int		count;
		ISpaceMarine	**units;

};


#endif
