/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:14:21 by sgah              #+#    #+#             */
/*   Updated: 2021/06/14 01:04:35 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template<typename P>
void	iter(P* array, unsigned int size, void (*ft)(P &elem))
{
	for (unsigned int i = 0; i < size; i++)
	{
		ft(array[i]);
	}
}

template<typename P>
void	iter(P const * array, unsigned int size, void (*ft)(P const &elem))
{
	for (unsigned int i = 0; i < size; i++)
	{
		ft(array[i]);
	}
}

#endif
