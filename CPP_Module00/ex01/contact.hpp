/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:42:02 by sgah              #+#    #+#             */
/*   Updated: 2021/05/01 14:32:19 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# define FIELD_COUNT 11

# include <string>
# include <iostream>

class Contact {

	public:
		Contact(void);
		~Contact(void);
		
		void	setfield(int i, std::string value);
		void	addcontact(void);
	private:
		static std::string _name_field[FIELD_COUNT];
		std::string _field[FIELD_COUNT];
};

#endif //CONTACT_H
