/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:36:53 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/30 11:06:41 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

bool
	replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream	oldFile;
	std::ofstream	newFile;
	std::string		oldString;
	std::string		newString;
	size_t			pos = 0;
	size_t			foundPos;
	char			c;

	oldFile.open(filename.c_str(), std::ifstream::in);
	if (!oldFile.is_open())
		return (std::cout << "Failed to open the ifile: " << filename << std::endl, true);
	newFile.open((filename + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!newFile.is_open())
		return (std::cout << "Failed to open the ofile: " << filename + ".replace" << std::endl,
			oldFile.close(), true);
	while (oldFile.get(c))
		oldString += c;
	oldFile.close();
	while (true)
	{
		foundPos = oldString.find(s1, pos);
		if (foundPos == std::string::npos)
		{
			newString.append(oldString.substr(pos));
			break ;
		}
		newString.append(oldString, pos, foundPos - pos);
		newString.append(s2);
		pos = foundPos + s1.length();
	}
	newFile << newString;
	newFile.close();
	return (false);
}

int
	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		replace(filename, s1, s2);
	}
	return (0);
}
