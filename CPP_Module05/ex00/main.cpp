/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:57:20 by sgah              #+#    #+#             */
/*   Updated: 2021/06/04 16:05:57 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
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
}
