/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 20:41:36 by sgah              #+#    #+#             */
/*   Updated: 2021/06/04 20:59:32 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {

	public:

		ShrubberyCreationForm(void);

		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator=(const ShrubberyCreationForm &rhs);

		void	execute(Bureaucrat const & executor) const;
		void	Creation(std::string const & target) const;
};


#endif
