/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:52:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 09:17:08 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a("Mister A", 150);
	Bureaucrat b("Misses B", 150);

	try
	{
		std::cout << "a: " << a << "b: " << b;
		std::cout << a++ << a;
		std::cout << (a += 30);
		std::cout << (b += 149);
		std::cout << (b -= 149);
		std::cout << (a += 150);
		std::cout << "Checkpoint" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
