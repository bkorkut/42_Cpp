/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:15:20 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/26 15:12:26 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	str;
	std::map<std::string, int> complvl;
	int			lvl;

	complvl["DEBUG"] = 1;
	complvl["INFO"] = 2;
	complvl["WARNING"] = 3;
	complvl["ERROR"] = 4;
	if (ac == 2)
	{
		str = av[1];
		lvl = complvl[str];
		switch (lvl)
		{
			case 1:
				std::cout << "[ DEBUG ]" << std::endl;
				harl.complain("DEBUG");
				std::cout << std::endl;
			case 2:
				std::cout << "[ INFO ]" << std::endl;
				harl.complain("INFO");
				std::cout << std::endl;
			case 3:
				std::cout << "[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				std::cout << std::endl;
			case 4:
				std::cout << "[ ERROR ]" << std::endl;
				harl.complain("ERROR");
				std::cout << std::endl;
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break ;
		}
	}
}
