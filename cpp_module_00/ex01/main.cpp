/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:30:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/01 15:48:24 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

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
				<< "--------------------------------------------" << std::endl
				<< std::endl;
}

int	main()
{
	PhoneBook	phonebook;

	start_up_prompt();
	while (1)
	{
		command = get_command();
		if (command == ADD)

		else if (command == SEARCH)

		else if (command == EXIT)
			break;
	}
	return 0;
}
