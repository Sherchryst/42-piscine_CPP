/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:28:31 by sgah              #+#    #+#             */
/*   Updated: 2021/06/16 08:54:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <exception>
# include <algorithm>

class span {

	public:

		span(unsigned int N);

		span(span const & src);
		~span(void);

		span &	operator=(const span &rhs);

		void	addNumber(int n);
		int		longestSpan(void);
		int		shortestSpan(void);

	class TooMuchValueException: public std::exception {
		public:
			const char	*what(void) const throw();
	};

	private:
		unsigned int		_n;
		std::vector<int>	lst;

};


#endif
