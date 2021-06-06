/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:02:36 by sgah              #+#    #+#             */
/*   Updated: 2021/06/07 01:42:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/**========================================================================
 *                           CONSTRUCTEUR
 *========================================================================**/

Form::Form(std::string const & Name, int rgs, int rge):
	_name(Name), _signed(false), _rgs(rgs), _rge(rge)
{
	if (rgs > 150)
		throw GradeTooLowException();
	else if (rgs < 1)
		throw GradeTooHighException();

	if (rge > 150)
		throw GradeTooLowException();
	else if (rge < 1)
		throw GradeTooHighException();
}

Form::Form(Form const & src):
	_name(src._name), _signed(src._signed), _rgs(src._rgs), _rge(src._rge){}

/**========================================================================
 *                           DESTRUCTEUR
 *========================================================================**/

Form::~Form(void) {}

/**========================================================================
 *                           FONCTION MEMBRE
 *========================================================================**/

void				Form::beSigned(Bureaucrat const & employe)
{
	if (employe.getGrade() <= this->_rgs)
	{
		this->_signed = true;
		employe.signForm(*this);
	}
	else
	{
		employe.signForm(*this);
		throw GradeTooLowException();
	}
}

std::string const &	Form::getName(void) const
{
	return (this->_name);
}

bool				Form::isSigned(void) const
{
	return (this->_signed);
}

int					Form::getRequiredGradeToSigned(void) const
{
	return (this->_rgs);
}

int					Form::getRequiredGradeToExecute(void) const
{
	return (this->_rge);
}

/**========================================================================
 *                           OVERLOAD OPERATOR
 *========================================================================**/

Form &				Form::operator=(const Form &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream &		operator<<(std::ostream & o, Form const &rhs)
{
	o <<"<"<< rhs.getName() <<">, Form requiered grade to signed <"
	<< rhs.getRequiredGradeToSigned()
	<<"> and Form requiered grade to execute <"
	<< rhs.getRequiredGradeToExecute() <<">. The form "
	<< ((rhs.isSigned()) ? "is signed." : "is not signed.") << std::endl;
	return o;
}

/**========================================================================
 *                             EXCEPTION
 *========================================================================**/

typedef Form::GradeTooHighException GradeTooHighException;

const char			*GradeTooHighException::what(void) const throw()
{
	return ("invalid grade: grade is too high");
}

typedef Form::GradeTooLowException GradeTooLowException;

const char			*GradeTooLowException::what(void) const throw()
{
	return ("invalid grade: grade is too low");
}

/*========================================================================*/

