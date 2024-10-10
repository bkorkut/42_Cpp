/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:35:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/10 16:13:00 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
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
		std::cout << "Enter phone number:" << std::endl;
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
	while (phone_number.empty()
		|| !(phone_number.length() > 3 && phone_number.length() < 12)
		|| phone_number.find_first_not_of("0123456789") != -1);
	contacts[index].set_phone_number(phone_number);
}

void	PhoneBook::add_darkest_secret(void)
{
	std::string	darkest_secret;

	do
	{
		std::cout << "Enter darkest secret:" << std::endl;
		std::getline(std::cin, darkest_secret);
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
	while (darkest_secret.empty());
	contacts[index].set_darkest_secret(darkest_secret);
}

void	PhoneBook::add_contact(void)
{

	this->add_first_name();
	this->add_last_name();
	this->add_nickname();
	this->add_phone_number();
	this->add_darkest_secret();
	this->index++;
	if (this->index > 7)
		this->index = 0;
}

std::string	truncate(const std::string &str)
{
	if (str.length() <= 10)
		return(str);
	return (str.substr(0, 9) + ".");
}

void	PhoneBook::display_contact_list(void) const
{
	std::cout << "Index     |First Name|Last Name |Nickname" << std::endl
	<< "--------------------------------------------" << std::endl;
	for (char i = 0; i < 8; i++)
	{
		std::cout.setf (std::ios_base::left, std::ios_base::adjustfield);
		std::cout << std::setfill(' ') << std::setw(10) << static_cast<int>(i)
		<< "|" << std::setfill(' ') << std::setw(10)
		<< truncate(this->contacts[i].get_first_name())
		<< "|" << std::setfill(' ') << std::setw(10)
		<< truncate(this->contacts[i].get_last_name())
		<< "|" << std::setfill(' ') << std::setw(10)
		<< truncate(this->contacts[i].get_nickname()) << std::endl;
	}
}

void	PhoneBook::display_single_contact(char index) const
{
	index -= '0';
	if (this->contacts[index].get_first_name().empty())
		std::cout << "No saved contact at index" << std::endl;
	else
	{
		std::cout << this->contacts[index].get_first_name() << std::endl
		<< this->contacts[index].get_last_name() << std::endl
		<< this->contacts[index].get_nickname() << std::endl
		<< this->contacts[index].get_phone_number() << std::endl
		<< this->contacts[index].get_darkest_secret() << std::endl;
	}
}

void	PhoneBook::search_contact(void) const
{
	std::string	index;

	display_contact_list();
	do
	{
		std::cout << "Enter index to see contact in detail:" << std::endl;
		std::getline(std::cin, index);
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
	while (index.length() != 1 || index.find_first_not_of("01234567") != -1);
	display_single_contact(index.at(0));
}
