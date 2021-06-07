/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:12:29 by sgah              #+#    #+#             */
/*   Updated: 2021/06/07 16:12:29 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

class Intern;

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

	public:

		Intern(void);

		Intern(Intern const & src);
		~Intern(void);

		Intern &	operator=(const Intern &rhs);

		Form*		makeForm(std::string form, std::string target);

};

struct work
{
	std::string		form;
	Form			*(*thisForm)(std::string);
};


#endif
