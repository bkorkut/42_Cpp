/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:20:32 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 13:07:39 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Forever Empty Form"), sign(false), gradeSign(150), gradeExec(150) {
	std::cout << "\033[92mForm constructor called\033[0m" << std::endl;
}

Form::Form(const std::string &name, int sign, int exec) : name(name), sign(false), gradeSign(sign), gradeExec(exec) {
	std::cout << "\033[34mForm parameter constructor called\033[0m" << std::endl;
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), sign(false), gradeSign(other.gradeSign), gradeExec(other.gradeExec) {
	std::cout << "\033[92mForm copy constructor called\033[0m" << std::endl;
}

Form	&Form::operator=(const Form &other) {
	std::cout << "\033[34mForm copy assignment operator called\033[0m" << std::endl;
	(void)other;
	return *this;
}

Form::~Form() {
	std::cout << "\033[31mForm destructor called\033[0m" << std::endl;
}

const std::string	&Form::getName(void) const {
	return this->name;
}

const std::string	Form::getSign() const {
	return sign ? "signed" : "unsigned";
}

int	Form::getGradeSign(void) const {
	return this->gradeSign;
}

int	Form::getGradeExec() const {
	return this->gradeExec;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->gradeSign)
		throw GradeTooLowException();
	this->sign = true;
}

std::ostream	&operator<<(std::ostream &os, const Form &form) {
	os << form.getName() << std::endl;
	os << "Status: " << form.getSign() << std::endl;
	os << "Grade required to sign: " << form.getGradeSign() << std::endl;
	os << "Grade required to execute: " << form.getGradeExec() << std::endl;
	return os;
}

