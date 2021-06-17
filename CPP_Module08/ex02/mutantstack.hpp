/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:56:40 by sgah              #+#    #+#             */
/*   Updated: 2021/06/17 12:50:01 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {

	public:

		MutantStack(void): std::stack<T>() {}

		MutantStack(std::stack<T> const & src): std::stack<T>(src) {}
		MutantStack(MutantStack const & src): std::stack<T>(src) {}
		virtual ~MutantStack(void){}

		using std::stack<T>::operator=;

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void){return (this->c.begin());}
		iterator	end(void){return (this->c.end());}

};


#endif
