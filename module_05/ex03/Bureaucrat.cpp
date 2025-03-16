/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:41:40 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/03 14:25:37 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : name("John Doe"), grade(150) {
	std::cout << "\033[92mBureaucrat default constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {
	std::cout << "\033[92mBureaucrat copy constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
	std::cout << "\033[34mBureaucrat parameter constructor called\033[0m" << std::endl;
	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "\033[34mBureaucrat copy assignment operator called\033[0m" << std::endl;
	this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "\033[31mBureaucrat destructor called\033[0m" << std::endl;
}

const std::string	&Bureaucrat::getName(void) const {
	return (this->name);
}

int	Bureaucrat::getGrade(void) const {
	return (this->grade);
}

Bureaucrat	&Bureaucrat::operator++(void) {
	if (this->grade <= 2)
		throw GradeTooHighException();
	--(this->grade);
	return *this;
}

Bureaucrat	Bureaucrat::operator++(int) {
	Bureaucrat old = *this;
	operator++();
	return old;
}

Bureaucrat	&Bureaucrat::operator--(void) {
	if (this->grade >= 149)
		throw GradeTooLowException();
	++(this->grade);
	return *this;
}

Bureaucrat	Bureaucrat::operator--(int) {
	Bureaucrat	old = *this;
	operator--();
	return old;
}

Bureaucrat	&Bureaucrat::operator+=(int n) {
	if (this->grade - n < 1)
		throw GradeTooHighException();
	this->grade -= n;
	return *this;
}

Bureaucrat	&Bureaucrat::operator-=(int n) {
	if (this->grade + n > 150)
		throw GradeTooLowException();
	this->grade += n;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

void	Bureaucrat::signForm(AForm &form) {
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << this->name << " couldn't sign " << form.getName()
					<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << this->name << " couldn't execute " << form.getName()
					<< " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
	return os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
}
