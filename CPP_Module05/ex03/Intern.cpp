/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:12:29 by sgah              #+#    #+#             */
/*   Updated: 2021/06/07 16:12:29 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/**========================================================================
 *                           CONSTRUCTOR DESTRUCTOR & OVERLOAD
 *========================================================================**/

Intern::Intern(void) {}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern(void) {}

Intern&			Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

/**========================================================================
 *                           FONCTION MEMBRE
 *========================================================================**/

Form*		makePPF(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*		makeRRF(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*		makeSCF(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*		Intern::makeForm(std::string form, std::string target)
{
	static struct work create[3] =
	{
		{"presidential pardon", makePPF},
		{"robotomy request", makeRRF},
		{"shrubbery creation", makeSCF}
	};

	for (int i = 0; i < 3; i++)
	{
		if (create[i].form == form)
		{
			std::cout<<"Intern creates <"<< form <<"> "<<std::endl;
			return (create[i].thisForm(target));
		}
	}

	std::cout<<"Intern can't create form: Unknowm type: "<< form <<std::endl;
	return (NULL);
}



