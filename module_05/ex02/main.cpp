/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:52:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 13:12:21 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	a;
	Form		b;
	Form		c("Some Real Serious Form", 49, 23);

	try
	{
		std::cout << a;
		std::cout << b;
		a.signForm(b);
		std::cout << c;
		a.signForm(c);
		std::cout << (a += 103);
		a.signForm(c);
		std::cout << "Shift over" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
