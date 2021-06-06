/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:52:25 by sgah              #+#    #+#             */
/*   Updated: 2021/06/07 01:50:42 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/**========================================================================
 *                           CONSTRUCTEUR
 *========================================================================**/

PresidentialPardonForm::PresidentialPardonForm(std::string const & Target):
	Form("PresidentialPardonForm", 25, 5, Target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
	Form(src){}

/**========================================================================
 *                           DESTRUCTEUR
 *========================================================================**/

PresidentialPardonForm::~PresidentialPardonForm(void) {}

/**========================================================================
 *                           OVERLOAD OPERATOR
 *========================================================================**/

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return (*this);
}

/**========================================================================
 *                           FONCTION MEMBRE
 *========================================================================**/

void						PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
		std::cout<<"<"<< this->getTarget() <<"> was pardon by Zafod Beeblebrox."<<std::endl;
	}
}
