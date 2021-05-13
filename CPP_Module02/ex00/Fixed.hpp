/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 22:31:23 by sgah              #+#    #+#             */
/*   Updated: 2021/05/12 23:35:23 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

	public:

		Fixed(void);

		Fixed(Fixed const & src);
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed &	operator=(Fixed const & rhs);

	private:

		int	_fix;

		static int const	_bits;

};


#endif
