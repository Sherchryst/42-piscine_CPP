/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:22:04 by sgah              #+#    #+#             */
/*   Updated: 2021/05/27 18:22:42 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

	private:
		int				current;
		AMateria		*sources[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &other);
		virtual	~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &other);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(const std::string &type);
};

#endif
