/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:20:32 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 11:26:23 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Forever Empty Form"), sign(false), gradeSign(150), gradeExec(150)
{
	std::cout << "\033[92mForm destructor called\033[0m" << std::endl;
}

Form::Form(const Form &other) : name(other.name), sign(false), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
	std::cout << "\033[92mForm destructor called\033[0m" << std::endl;
}

Form	&Form::operator=(const Form &other)
{
	std::cout << "\033[34mForm destructor called\033[0m" << std::endl;
	(void)other;
	return *this;
}

Form::~Form()
{
	std::cout << "\033[31mForm destructor called\033[0m" << std::endl;
}

const std::string	&Form::getName(void) const
{
	return this->name;
}

const std::string	Form::getSign() const
{
	if (sign)
		return "signed";
	else
		return "unsigned";
}

int	Form::getGradeSign(void) const
{
	return this->gradeSign;
}

int	Form::getGradeExec() const
{
	return this->gradeExec;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low";
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->sign = true;
}

std::ostream	&operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << std::endl;
	os << "Status: " << form.getSign() << std::endl;
	os << "Grade required to sign: " << form.getGradeSign() << std::endl;
	os << "Grade required to execute: " << form.getGradeExec() << std::endl;
	return os;
}

