/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:35:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/06 21:05:59 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(0) {}

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
	}
	while (first_name.empty());
	contacts[index].set_first_name(first_name);
}

void	PhoneBook::add_last_name(void)
{
	std::string	last_name;

	do
	{
		std::cout << "Enter last name:" << std::endl;
		std::getline(std::cin, last_name);
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
	}
	while (last_name.empty());
	contacts[index].set_last_name(last_name);
}

void	PhoneBook::add_nickname(void)
{
	std::string	nickname;

	do
	{
		std::cout << "Enter nickname:" << std::endl;
		std::getline(std::cin, nickname);
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
	}
	while (nickname.empty());
	contacts[index].set_nickname(nickname);
}

void	PhoneBook::add_phone_number(void)
{
	std::string	phone_number;

	do
	{
		std::cout << "Enter first name:" << std::endl;
		std::getline(std::cin, phone_number);
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
	}
	while (phone_number.empty() || std::strchr());
	contacts[index].set_phone_number(phone_number);
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
	this->index++;
	if (this->index > 7)
		this->index = 0;
}

void	PhoneBook::search_contact(void)
{

}
