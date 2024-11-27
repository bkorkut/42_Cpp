/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:20:32 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 16:25:18 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Forever Empty Form"), sign(false), gradeSign(150), gradeExec(150)
{
	std::cout << "\033[92mForm constructor called\033[0m" << std::endl;
}

AForm::AForm(const std::string &name, int sign, int exec) : name(name), sign(false), gradeSign(sign), gradeExec(exec)
{
	std::cout << "\033[34mForm parameter constructor called\033[0m" << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), sign(false), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
	std::cout << "\033[92mForm copy constructor called\033[0m" << std::endl;
}

AForm	&AForm::operator=(const AForm &other)
{
	std::cout << "\033[34mForm copy assignment operator called\033[0m" << std::endl;
	(void)other;
	return *this;
}

AForm::~AForm()
{
	std::cout << "\033[31mForm destructor called\033[0m" << std::endl;
}

const std::string	&AForm::getName(void) const
{
	return this->name;
}

const std::string	AForm::getSign() const
{
	if (sign)
		return "signed";
	else
		return "unsigned";
}

int	AForm::getGradeSign(void) const
{
	return this->gradeSign;
}

int	AForm::getGradeExec() const
{
	return this->gradeExec;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "Form is not signed";
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->sign = true;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->sign)
		throw NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	this->perform();
}

std::ostream	&operator<<(std::ostream &os, const AForm &form)
{
	os << form.getName() << std::endl;
	os << "Status: " << form.getSign() << std::endl;
	os << "Grade required to sign: " << form.getGradeSign() << std::endl;
	os << "Grade required to execute: " << form.getGradeExec() << std::endl;
	return os;
}

