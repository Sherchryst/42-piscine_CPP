/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:48:13 by sgah              #+#    #+#             */
/*   Updated: 2021/06/09 22:29:34 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	std::srand(std::time(NULL));

	static const char	alnum[] =	"abcdefghijklmnopqrstuvwxyz"\
									"ABCDEFGHIJKLMNOPQRSTUVWXYZ"\
									"0123456789";

	char		*res = new char[16 + sizeof(int)];

	for (int i = 0; i < 8; i++)
		res[i] = alnum[std::rand() % 62];

	*reinterpret_cast<int*>(res + 8) = std::rand();

	for (int i = 8 + sizeof(int); (unsigned int)i < 16 + sizeof(int); i++)
		res[i] = alnum[std::rand() % 62];
	return (res);
}

Data 	*deserialize(void *serial)
{
	Data	*data = new Data;
	char	*raw = reinterpret_cast<char*>(serial);

	data->s1 = std::string(raw, 8);
	data->s2 = std::string(raw + 8 + sizeof(int), 8);
	data->n = *reinterpret_cast<int *>(raw + 8);
	return (data);
}

int		main(void)
{
	void	*serial = serialize();
	Data	*data = deserialize(serial);

	std::srand(time(0));
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	std::cout << "n : " << data->n << std::endl;

	delete []reinterpret_cast<char*>(serial);
	delete data;
	return (0);
}
