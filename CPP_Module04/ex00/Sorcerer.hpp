/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:12:48 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 21:55:34 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

	public:

		Sorcerer(std::string name, std::string title);

		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		std::string	getName(void)const;
		std::string	getTitle(void)const;

		void	intro(void) const;
		void 	polymorph(Victim const &rhs)const;

		Sorcerer &	operator=(const Sorcerer &rhs);


	private:

		Sorcerer(void);
		std::string _name;
		std::string _title;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const &rhs);


#endif
