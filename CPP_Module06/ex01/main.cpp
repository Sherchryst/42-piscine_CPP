/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:48:13 by sgah              #+#    #+#             */
/*   Updated: 2021/06/09 19:37:41 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <climits>
#include <time.h>
#include <iostream>
#include <string>
#include <cctype>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void*		serialize(void)
{
	std::srand (time(NULL));
	Data*		res = new Data;
	char		buf[8];
	std::string	str;

	for(size_t i = 0; i < 8; i++)
		buf[i] = (std::rand() % 2) ? std::rand() % 10 + 48 :
					(std::rand() % 2) ? std::rand() % 26 + 65 : std::rand() % 26 + 97;
	res->s1 = std::string(buf, 8);

	res->n = std::rand();

	for(size_t i = 0; i < 8; i++)
		buf[i] = (std::rand() % 2) ? std::rand() % 10 + 48 :
									(std::rand() % 2) ? std::rand() % 26 + 65 : std::rand() % 26 + 97;
	res->s2 = std::string(buf, 8);

	return (reinterpret_cast<void*>(res));
}

Data*		deserialize(void* raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int			main(void)
{
	Data*	data = deserialize(serialize());

	std::cout<<"String 1: "<< data->s1 <<std::endl;
	std::cout<<"int     : "<< std::dec << data->n <<std::endl;
	std::cout<<"String 2: "<< data->s2 <<std::endl;

	delete data;
	return (0);
}
