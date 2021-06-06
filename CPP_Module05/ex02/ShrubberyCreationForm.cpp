/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:41:36 by sgah              #+#    #+#             */
/*   Updated: 2021/06/06 20:10:30 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

/**========================================================================
 *                           CONSTRUCTEUR
 *========================================================================**/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & Target):
	Form("ShrubberyCreationForm", 145, 137, Target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
	Form(src){}

/**========================================================================
 *                           DESTRUCTEUR
 *========================================================================**/

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/**========================================================================
 *                           FONCTION MEMBRE
 *========================================================================**/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getRequiredGradeToExecute())
	{
		executor.executeForm(*this);
		throw GradeTooLowException();
	}
	else if (this->isSigned() == false)
	{
		executor.executeForm(*this);
		throw NotSignedException();
	}
	else
	{
		executor.executeForm(*this);
		this->Creation(this->getTarget());
	}
}

void	ShrubberyCreationForm::Creation(std::string const & target) const
{
	std::ofstream ofs(("<" + target + ">_shrubbery").c_str());
	std::stringstream buff;

	for (int i = 0; i < 5; i++)
	{
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 0; j < 10 - i; j++)
				buff << " ";
			for (int j = 0; j < (i * 2 - 1); j++)
				buff << "*";
			buff << std::endl;
		}
		for (int i = 1; i <= 3; i++)
			buff << "        @@@" << std::endl;
		buff << std::endl;
	}

	ofs << buff.str();
	ofs.close();
}
