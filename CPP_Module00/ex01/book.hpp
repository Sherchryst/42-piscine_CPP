/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:11:31 by sgah              #+#    #+#             */
/*   Updated: 2021/05/01 21:46:39 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_H
# define BOOK_H

# define COUNT 8

# include "contact.hpp"

class Book {
	
	public:
		Book(void);
		~Book(void);

		void	setcontact(Contact newcontact);
		int	getcount(void) const;
	private:
		int		_count;
		Contact	_contact[COUNT];
};

#endif //BOOK_H
