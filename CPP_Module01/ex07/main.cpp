/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgah <sgah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:01:08 by sgah              #+#    #+#             */
/*   Updated: 2021/05/06 12:16:10 by sgah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	//Usage de replace
	if (ac != 4)
	{
		std::cout << "Usage: ./replace [filename] [str1] [str2]"
		<<std::endl;
		return 1;
	}
	
	std::string str1 = av[2];
	std::string str2 = av[3];
	
	//check empty string
	if (str1.compare("") == 0 || str2.compare("") == 0)
	{
		std::cout << "Error: empty string"<< std::endl;
		return 1;
	}
	
	//Open file
	std::ifstream fs(av[1]);

	//Check if file is existing
	if(fs.fail())
	{
		std::cout << "Could not open this file" << std::endl;
		return 1;
	}

	std::string file = av[1];
	
	//Create file.replace
	std::ofstream ofs((file + ".replace").c_str());

	std::string str;
	
	//initialise buffer
	std::stringstream buff;

	while (std::getline(fs, str))
		if  (str.compare(str1) == 0)
			buff << str2 << std::endl;
		else
			buff << str << std::endl;
	//ADD everything to file.replace
	ofs << buff.str();
	//Close files
	fs.close();
	ofs.close();
}
