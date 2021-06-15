/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:52:54 by sgah              #+#    #+#             */
/*   Updated: 2021/06/15 19:26:31 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <exception>
# include <iostream>
# include <list>


class ValueNotFindException: public std::exception {
	public:
		const char	*what(void) const throw()
		{
			return "Value Not Find";
		};
};

template <typename T>
int easyfind(T &lst, int i)
{
	typename T::iterator it = std::find(lst.begin(), lst.end(), i);

	if(it == lst.end())
		throw ValueNotFindException();

	return *it;
}

#endif
