/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:02:36 by sgah              #+#    #+#             */
/*   Updated: 2021/06/04 19:00:19 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

class Form;

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

	public:
		Form(std::string const & Name, int rgs, int rge);

		Form(Form const & src);
		~Form(void);

		void				beSigned(Bureaucrat const & employe);

		std::string const &	getName(void) const;
		bool				isSigned(void) const;
		int					getRequiredGradeToSigned(void) const;
		int					getRequiredGradeToExecute(void) const;

		Form &				operator=(const Form &rhs);

		class GradeTooHighException: public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char	*what(void) const throw();
		};

	private:
		Form(void);

		std::string const	_name;
		bool				_signed;
		int const			_rgs;
		int const			_rge;

};

std::ostream &	operator<<(std::ostream & o, Form const &rhs);


#endif
