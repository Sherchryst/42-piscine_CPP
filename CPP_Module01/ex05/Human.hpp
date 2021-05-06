/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:11:10 by sgah              #+#    #+#             */
/*   Updated: 2021/05/05 14:31:02 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {

	public:

	Human(void);
	~Human(void);

		std::string	identify(void) const;
		Brain const &	getBrain(void) const;
	private:

		Brain		_brain;
};

#endif
