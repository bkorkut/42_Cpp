/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:52:06 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/24 20:55:36 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class	myException : public std::exception
{
	public:
		const char*	what() const throw() override;
};

const char* myException::what() const throw()
{
	return ("Did you say What?");
}
// void	call_exception()
// {
// 	myException e;
// 	throw e;
// }

int	main(void)
{
	// Bureaucrat a;
	// Bureaucrat b;

	try
	{
		// call_exception();
		throw myException();
	}
	catch (std::exception & e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
}
