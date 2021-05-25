/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Normy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 22:32:45 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 22:59:47 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NORMY_H
# define NORMY_H

# include <iostream>
# include "Victim.hpp"

class Normy : public Victim{
	
	public:

		Normy(std::string name);

		Normy(Normy const & src);
		~Normy(void);

		Normy &	operator=(const Normy &rhs);

		void	getPolymorphed(void)const;

	private:
		Normy(void);

};


#endif
