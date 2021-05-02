/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:42:02 by sgah              #+#    #+#             */
/*   Updated: 2021/05/02 17:40:09 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# define FIELD_COUNT 11

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

	public:
		Contact(void);
		~Contact(void);
		
		std::string	getfield(int i) const;
		std::string	getnamefield(int i) const;
		void		setfield(int i, std::string value);
		void		addcontact(void);


	private:
		static std::string _name_field[FIELD_COUNT];
		std::string _field[FIELD_COUNT];
};

#endif //CONTACT_H
