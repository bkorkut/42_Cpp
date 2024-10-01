/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 08:49:23 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/01 11:31:28 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

using std::string;

int	main(int ac, char **av)
{
	string combinedInput;

	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			combinedInput.append(av[i]);
		for (string::iterator i = combinedInput.begin(); i != combinedInput.end(); i++)
			std::cout << static_cast<char>(std::toupper(*i));
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
