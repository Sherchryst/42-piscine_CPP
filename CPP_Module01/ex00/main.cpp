/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 23:52:25 by sgah              #+#    #+#             */
/*   Updated: 2021/05/04 00:28:56 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pony.hpp>

void	ponyOnTheHeap(void)
{
	Pony *ponyHeap = new Pony("PonyHeap");
	
	ponyHeap->ponyInHell();

	delete ponyHeap;
}

void	ponyOnTheStack(void)
{
	Pony ponyStack = Pony("PonyStack");

	ponyStack.ponyInHell();
}

int	main()
{
	std::cout << "--STORY OF PONYHEAP--" << std::endl;
	ponyOnTheHeap();

	std::cout << "--STORY OF PONYSTACK--" << std::endl;
	ponyOnTheStack();
}
