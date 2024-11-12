/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:15:39 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/30 10:27:11 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	functs[0] = &Harl::debug;
	functs[1] = &Harl::info;
	functs[2] = &Harl::warning;
	functs[3] = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< std::endl << "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
			<< std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

const std::string	&Harl::get_level(int i) const
{
	return (this->levels[i]);
}

void	Harl::complain(const std::string &level)
{
	int	i = 0;

	while (i < 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*functs[0])();
			std::cout << std::endl;
			// Fall through
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*functs[1])();
			std::cout << std::endl;
			// Fall through
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*functs[2])();
			std::cout << std::endl;
			// Fall through
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*functs[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}

