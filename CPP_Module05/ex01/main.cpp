/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:57:20 by sgah              #+#    #+#             */
/*   Updated: 2021/06/04 20:19:53 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

/**========================================================================
 **                            TEST BUREAUCRAT
 *========================================================================**/
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;

	std::cout << " * Set grade" << std::endl;
	b.setGrade(100);
	std::cout << b << std::endl;

	std::cout << " * Too low grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", 420);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Too high" << std::endl;
	try {
		Bureaucrat bHigh("Peter", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Increment" << std::endl;
	try {
		while (true)
		{
			b.incGrade();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	std::cout << " * Decrement" << std::endl;
	try {
		while (true)
		{
			b.decGrade();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

/**========================================================================
 **                            TEST FORM
 *========================================================================**/

	std::cout << " *Form creation" << std::endl;
	Form f1("Form_42", 42, 42);
	std::cout << f1 << std::endl;

	std::cout << " * Too low form grade" << std::endl;
	try {
		Form fLow("Form_low", 420, 420);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Too high form grade" << std::endl;
	try {
		Form fHigh("Form_high", 0, 0);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << b << std::endl;

	std::cout << " * Bureaucrat with low grade try to sign" << std::endl;
	try
	{
		f1.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << f1 << std::endl;
	b.setGrade(42);
	std::cout << std::endl << b << std::endl;

		std::cout << " * Bureaucrat with high grade try to sign" << std::endl;
	try
	{
		f1.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << f1 << std::endl;
}
