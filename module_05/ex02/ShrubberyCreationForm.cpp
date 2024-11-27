/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:32:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 16:27:17 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#define VOID(a) (void)a

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("notForeverEmptyTarget")
{
	std::cout << "\033[92mShrubberyCreationForm constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137), target(other.target)
{
	std::cout << "\033[92mShrubberyCreationForm copy constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "\033[34mShrubberyCreationForm parameter constructor called\033[0m" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "\033[34mShrubberyCreationForm copy assignment operator called\033[0m" << std::endl;
	this->target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[31mShrubberyCreationForm destructor called\033[0m" << std::endl;
}

void	ShrubberyCreationForm::perform() const
{
	// create a file and plant a tree in it
}
