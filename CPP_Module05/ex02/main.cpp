/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:57:20 by sgah              #+#    #+#             */
/*   Updated: 2021/06/07 01:56:32 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;

	std::cout << " * Set grade" << std::endl;
	b.setGrade(150);
	std::cout << b << std::endl;

/**========================================================================
 **                            TEST FORMS
 *========================================================================**/

	std::cout << " *Form creation" << std::endl;
	ShrubberyCreationForm f1("Maison");
	RobotomyRequestForm f2("Somebody");
	PresidentialPardonForm f3("Dominique de Villepin");
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;

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
	std::cout<<std::endl;
	try
	{
		f2.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		f2.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<std::endl;

	try
	{
		f3.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		f3.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<std::endl;

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;

	b.setGrade(1);
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
	std::cout<<std::endl;
	try
	{
		f2.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<std::endl;
	try
	{
		f3.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout<<std::endl;
		std::cout << " * Bureaucrat with high grade try to sign and execute" << std::endl;
	try
	{
		f1.beSigned(b);
		f1.execute(b);
		f2.beSigned(b);
		f2.execute(b);
		f3.beSigned(b);
		f3.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<std::endl<< f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << f3 << std::endl;
}
