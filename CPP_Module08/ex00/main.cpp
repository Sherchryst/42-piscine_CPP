/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:14:50 by sgah              #+#    #+#             */
/*   Updated: 2021/06/15 19:26:00 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int> lst;

	lst.push_front(1);
	lst.push_front(12);
	lst.push_front(123);
	lst.push_front(1234);
	lst.push_front(9);

	try
	{
		easyfind(lst, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << easyfind(lst, 9) << std::endl;
	std::cout << easyfind(lst, 1) << std::endl;
	std::cout << easyfind(lst, 123) << std::endl;
}
