/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:41:40 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 18:56:46 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Mustermann"), grade(150)
{
	std::cout << "\033[34mBureaucrat default constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "\033[34mBureaucrat copy constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	std::cout << "\033[92mBureaucrat parameter constructor called\033[0m" << std::endl;
	// throw exeptions
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "\033[92mBureaucrat copy assignment operator called\033[0m" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "\033[31mBureaucrat destructor called\033[0m" << std::endl;
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

Bureaucrat	&Bureaucrat::operator++(void)
{
	// throw exeptions if grade is out of range!
	++grade;
	return *this;
}

Bureaucrat	&Bureaucrat::operator--(void)
{
	// throw exeptions if grade is out of range!
	--grade;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return os;
}
