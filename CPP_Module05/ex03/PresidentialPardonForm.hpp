/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:52:25 by sgah              #+#    #+#             */
/*   Updated: 2021/06/06 20:54:33 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form {

	public:

		PresidentialPardonForm(std::string const & Target);

		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &	operator=(const PresidentialPardonForm &rhs);

		void						execute(Bureaucrat const & executor) const;

};


#endif
