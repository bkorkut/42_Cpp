/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:30:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/17 18:33:03 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

/*

CXX = c++ standart flags
CXXFLAGS = standart flags

cerr = • Unless specified otherwise, every output messages must be ended by a new-line
character and displayed to the standard output.

std::string::npos = static_cast<size_t>(-1)

const at function ends allows const variabless to access
methods (that dont change anything) the variable can't know that!

*/

static void	start_up_prompt(void)
{
	std::cout	<< "--------------------------------------------" << std::endl
				<< "       This is your awesome phonebook       " << std::endl
				<< "--------------------------------------------" << std::endl
				<< "Please enter one of the following commands: " << std::endl
				<< std::endl
				<< "ADD         to add a contact                " << std::endl
				<< "SEARCH      to search your contact list     " << std::endl
				<< "EXIT        to exit your phonebook          " << std::endl
				<< "--------------------------------------------" << std::endl;
}

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	start_up_prompt();
	while (1)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
			break;
		std::cout	<< "--------------------------------------------" << std::endl
					<< "Please enter a command (ADD, SEARCH or EXIT)" << std::endl
					<< "--------------------------------------------" << std::endl;
	}
	return 0;
}
