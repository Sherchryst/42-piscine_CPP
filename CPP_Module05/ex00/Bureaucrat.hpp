/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 13:44:14 by sgah              #+#    #+#             */
/*   Updated: 2021/06/04 17:01:59 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>

class Bureaucrat {

	public:
		Bureaucrat(std::string const & Name, int Grade);

		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		std::string const &	getName(void) const;
		int					getGrade(void) const;

		void				setGrade(int Grade);
		void				incGrade(void);
		void				decGrade(void);

		Bureaucrat &		operator=(const Bureaucrat &rhs);

		class GradeTooHighException: public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char	*what(void) const throw();
		};

	private:
		Bureaucrat(void);

		std::string const	_name;
		int					_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rhs);


#endif
