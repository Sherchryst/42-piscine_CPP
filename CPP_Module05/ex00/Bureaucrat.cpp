/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:44:14 by sgah              #+#    #+#             */
/*   Updated: 2021/06/04 16:58:46 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/**========================================================================
 *                             CONSTRUCTEUR
 *========================================================================**/

Bureaucrat::Bureaucrat(std::string const & Name, int Grade):
	_name(Name)
{
	this->setGrade(Grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):
	_name(src._name), _grade(src._grade) {}

/**========================================================================
 *                             DESTRUCTEUR
 *========================================================================**/

Bureaucrat::~Bureaucrat(void) {}

/**========================================================================
 *                             FONCTION MEMBRE
 *========================================================================**/

std::string const &	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void				Bureaucrat::setGrade(int Grade)
{
	if (Grade > 150)
		throw GradeTooLowException();
	else if (Grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = Grade;
}

void				Bureaucrat::incGrade(void)
{
	this->setGrade(this->_grade - 1);
}

void				Bureaucrat::decGrade(void)
{
	this->setGrade(this->_grade + 1);
}

/**========================================================================
 *                             OVERLOAD OPERATOR
 *========================================================================**/

std::ostream &		operator<<(std::ostream & o, Bureaucrat const &rhs)
{
	o <<"<"<< rhs.getName() <<">, bureaucrat grade <"<< rhs.getGrade() <<">."
	<<std::endl;
	return o;
}

/**========================================================================
 *                             EXCEPTION
 *========================================================================**/

typedef Bureaucrat::GradeTooHighException GradeTooHighException;

const char			*GradeTooHighException::what(void) const throw()
{
	return ("invalid grade: Bureaucrat grade is too high");
}

typedef Bureaucrat::GradeTooLowException GradeTooLowException;

const char			*GradeTooLowException::what(void) const throw()
{
	return ("invalid grade: Bureaucrat grade is too low");
}

/*========================================================================*/
