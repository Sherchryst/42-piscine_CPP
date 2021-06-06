/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:57:20 by sgah              #+#    #+#             */
/*   Updated: 2021/06/06 20:16:37 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;

	std::cout << " * Set grade" << std::endl;
	b.setGrade(150);
	std::cout << b << std::endl;

/**========================================================================
 **                            TEST FORM
 *========================================================================**/

	std::cout << " *Form creation" << std::endl;
	ShrubberyCreationForm f1("Maison");
	std::cout << f1 << std::endl;

	std::cout << std::endl << b << std::endl;

	std::cout << " * Bureaucrat with low grade try to signs an executs" << std::endl;
	try
	{
		f1.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		f1.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << f1 << std::endl;
	b.setGrade(42);
	std::cout << std::endl << b << std::endl;

		std::cout << " * Bureaucrat with high grade try to executs not signed form" << std::endl;
		try
	{
		f1.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		std::cout << " * Bureaucrat with high grade try to sign and execute" << std::endl;
	try
	{
		f1.beSigned(b);
		f1.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << f1 << std::endl;
}
