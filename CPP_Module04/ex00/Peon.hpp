/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:48:28 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 22:28:23 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

	public:

		Peon(std::string name);

		Peon(Peon const & src);
		~Peon(void);

		Peon &	operator=(const Peon &rhs);

		void	getPolymorphed(void)const;

	private:
		Peon(void);
		
};


#endif
