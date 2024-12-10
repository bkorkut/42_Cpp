/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:33:19 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/10 14:54:12 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

bool	RobotomyRequestForm::seeded = false;

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("notForeverEmptyTarget")
{
	std::cout << "\033[92mRobotomyRequestForm constructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45), target(other.target)
{
	std::cout << "\033[92mRobotomyRequestForm constructor called\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "\033[34mRobotomyRequestForm parameter constructor called\033[0m" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "\033[34mRobotomyRequestForm copy assignment operator called\033[0m" << std::endl;
	this->target = other.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[31mRobotomyRequestForm destructor called\033[0m" << std::endl;
}

const char* RobotomyRequestForm::RobotomyFailedException::what() const throw()
{
	return "Robotomy failed";
}

void	RobotomyRequestForm::perform() const
{
	int	i;

	if (!seeded)
		srand(time(0));
	seeded = true;
	i = rand();
	std::cout << "VRRRRRRRRRRRRRRRR! " << i << std::endl;
	if (!(i % 2))
		throw RobotomyFailedException();
	std::cout << this->target << " has been robotomized successfully" << std::endl;
}
