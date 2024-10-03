/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:35:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/03 16:54:37 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

void	PhoneBook::add_first_name(void)
{
	std::string	first_name;

	do
	{
		std::cout << "Enter first name:" << std::endl;
		std::getline(std::cin, first_name);
		if (std::cin.eof())
		{
			std::cerr << "EOF encountered unexpectedly." << std::endl;
			exit(0);
		}
		else if (std::cin.bad())
		{
			std::cerr << "Input stream error badbit ocurred." << std::endl;
			exit(1);
		}
		else if (std::cin.fail())
		{
			std::cerr << "Input stream error failbit ocurred." << std::endl;
			exit(1);
		}
		std::cout << index << first_name << std::endl;
	}
	while (first_name.empty());
	contacts[index].set_first_name(first_name);
}

void	PhoneBook::add_last_name(void)
{

}

void	PhoneBook::add_nickname(void)
{

}

void	PhoneBook::add_phone_number(void)
{

}

void	PhoneBook::add_darkest_secret(void)
{

}

void	PhoneBook::add_contact(void)
{

	add_first_name();
	// add_last_name();
	// add_nickname();
	// add_phone_number();
	// add_darkest_secret();
}

void	PhoneBook::search_contact(void)
{

}

void	PhoneBook::set_index(char index)
{
	this->index = index;
	if (this->index > 7)
		this->index = 0;
}
