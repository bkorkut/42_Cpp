/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:52:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/10 14:59:52 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				a;
	AForm					*b;
	ShrubberyCreationForm	c;
	RobotomyRequestForm		d;
	PresidentialPardonForm	e;

	b = &c;
	try
	{
		std::cout << a;
		std::cout << *b;
		a.signForm(*b);
		std::cout << (a += 103);
		a.signForm(*b);
		a.executeForm(*b);
		std::cout << d;
		a.signForm(d);
		a.executeForm(d);
		std::cout << e;
		a.signForm(e);
		std::cout << (a += 42);
		a.executeForm(d);
		a.executeForm(d);
		a.executeForm(d);
		a.signForm(e);
		a.executeForm(e);
		std::cout << "Shift over" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
