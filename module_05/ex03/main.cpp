/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:52:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/10 13:44:39 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		randomIntern;
	Bureaucrat	a;
	AForm		*b = NULL;

	try
	{
		std::cout << a;
		b = randomIntern.makeForm("ShrubberyCreationForm", "Berndt");
		std::cout << *b;
		std::cout << (a += 149);
		a.signForm(*b);
		a.executeForm(*b);
		std::cout << "Shift over" << std::endl;
		delete b;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
		delete b;
	}
}
