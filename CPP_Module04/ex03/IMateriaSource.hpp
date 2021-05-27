/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:18:02 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 18:19:39 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:

		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;

};

#endif
