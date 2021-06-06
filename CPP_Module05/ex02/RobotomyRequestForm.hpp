/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 20:25:52 by sgah              #+#    #+#             */
/*   Updated: 2021/06/06 20:25:52 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>

class RobotomyRequestForm {

	public:

		RobotomyRequestForm(void);

		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &	operator=(const RobotomyRequestForm &rhs);


	private:

};


#endif