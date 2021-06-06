/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:25:52 by sgah              #+#    #+#             */
/*   Updated: 2021/06/06 20:57:14 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/**------------------------------------------------------------------------
 *                           CONSTRUCTEUR
 *------------------------------------------------------------------------**/

RobotomyRequestForm::RobotomyRequestForm(std::string const & Target):
	Form("RobotomyRequestForm", 72, 45, Target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
	Form(src){}

/**------------------------------------------------------------------------
 *                           DESTRUCTEUR
 *------------------------------------------------------------------------**/

RobotomyRequestForm::~RobotomyRequestForm(void) {}

/**========================================================================
 *                           OVERLOAD OPERATOR
 *========================================================================**/

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	return (*this);
}

/**========================================================================
 *                           FONCTION MEMBRE
 *========================================================================**/

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
		if (std::rand() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized";
		else
			std::cout << this->getTarget() << " could not be robotomized";
	}
}
