/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThisIsStupide.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 23:14:17 by sgah              #+#    #+#             */
/*   Updated: 2021/05/25 23:19:51 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THISISSTUPIDE_H
# define THISISSTUPIDE_H

# include <iostream>
# include "Victim.hpp"

class ThisIsStupide : public Victim{

	public:

		ThisIsStupide(std::string name);

		ThisIsStupide(ThisIsStupide const & src);
		~ThisIsStupide(void);

		ThisIsStupide &	operator=(const ThisIsStupide &rhs);

		void	getPolymorphed(void)const;

	private:
		ThisIsStupide(void);

};


#endif
