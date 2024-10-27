/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:15:20 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/27 14:38:27 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	str;
	int			i = 0;

	if (ac == 2)
	{
		str = av[1];
		while (i < 4)
		{
			if (harl.get_level(i) == str)
				break ;
			i++;
		}
		switch (i)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				harl.complain("DEBUG");
				std::cout << std::endl;
				// Fall through
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				harl.complain("INFO");
				std::cout << std::endl;
				// Fall through
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				harl.complain("WARNING");
				std::cout << std::endl;
				// Fall through
			case 3:
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
