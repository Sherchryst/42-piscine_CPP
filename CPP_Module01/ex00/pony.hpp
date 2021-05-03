/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:38:57 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 00:01:57 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony {

	public:

		Pony(std::string name);
		~Pony(void);

		void ponyInHell(void) const;

	private:

		std::string _name;
};

#endif
