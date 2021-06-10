/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:00:50 by sgah              #+#    #+#             */
/*   Updated: 2021/06/10 16:06:13 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void	swap(T a, T b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T		min(T a, T b)
{
	return (b <= a ? b : a);
}

template<typename T>
T		max(T a, T b)
{
	return (b >= a ? b : a);
}

#endif
