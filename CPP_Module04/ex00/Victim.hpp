/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:44:24 by sgah              #+#    #+#             */
/*   Updated: 2021/05/26 02:37:23 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>

class Victim {

	public:

		Victim(std::string name);

		Victim(Victim const & src);
		~Victim(void);

		Victim &	operator=(const Victim &rhs);

		std::string     getName(void)const;

		void	intro(void)const;
		virtual void	getPolymorphed(void)const;


	protected:

		std::string	_name;
	private:
		
		Victim(void);
};

std::ostream &  operator<<(std::ostream & o, Victim const &rhs);

#endif
