/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:43:20 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 18:43:08 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

class AMateria;
# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	public:

		AMateria(std::string const & type);

		AMateria(AMateria const & src);
		virtual ~AMateria(void);

		AMateria &	operator=(const AMateria &rhs);
		
		std::string const &	getType(void)const;
		unsigned int		getXP(void)const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		
		std::string	_type;
		unsigned int	_xp;

};


#endif
