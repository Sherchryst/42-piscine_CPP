/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:52:39 by sgah              #+#    #+#             */
/*   Updated: 2021/06/09 23:20:02 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <typeinfo>

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void)
{
	std::srand(std::time(NULL));

	int alea = std::rand() % 4 + 1;

	if(alea == 1)
		return (new A);
	if(alea == 2)
		return (new B);
	if(alea == 3)
		return (new C);
	return (new A);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	Base	a;
	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast err) {}
	try
	{
		a = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast err) {}
	try
	{
		a = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast err) {}
}

int		main(void)
{
	Base	*c = generate();

	identify_from_pointer(c);
	identify_from_reference(*c);

	delete c;
	return (0);
}
