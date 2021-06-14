/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:04:08 by sgah              #+#    #+#             */
/*   Updated: 2021/06/14 19:53:58 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array {
	public:
		Array(void) : array(NULL), n(0)
		{}

		Array(unsigned int n) : array(new T[n]()), n(n)
		{}

		~Array(void)
		{
			if (this->array != NULL)
				delete [] this->array;
		}

		Array(const Array &obj) : array(NULL), n(0)
		{
			*this = obj;
		}

		const Array &operator=(const Array &target)
		{
			if (this->array != NULL)
				delete [] this->array;
			this->array = new T[target.size()];
			this->n = target.size();
			for (unsigned int i = 0; i < target.size(); i++)
				this->array[i] = target.array[i];
			return (*this);
		}

		T &operator[](int i)
		{
			if (!this->array || i < 0 || (unsigned int)i >= this->n)
				throw std::exception();
			return this->array[i];
		}

		T const &operator[](int i) const
		{
			if (!this->array || i < 0 || (unsigned int)i >= this->n)
				throw std::exception();
			return this->array[i];
		}

		unsigned int size(void) const
		{
			return this->n;
		}

	private:
		T				*array;
		unsigned int	n;
};

#endif
