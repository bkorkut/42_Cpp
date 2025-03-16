/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:02:47 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/03 18:03:54 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {
	classes[0] = "ShrubberyCreationForm";
	classes[1] = "RobotomyRequestForm";
	classes[2] = "PresidentiealPardonForm";
}

Intern::Intern(const Intern &other) {
	this->classes[0] = other.classes[0];
	this->classes[1] = other.classes[1];
	this->classes[2] = other.classes[2];
}

Intern &Intern::operator=(const Intern &other) {
	this->classes[0] = other.classes[0];
	this->classes[1] = other.classes[1];
	this->classes[2] = other.classes[2];
	return *this;
}

Intern::~Intern() {}

const char*	Intern::NoSuchClassException::what() const throw() {
	return "Form not created because no such class exists";
}

AForm	*Intern::makeForm(std::string name, std::string target) {
	int		i;
	AForm	*p;

	i = 0;
	while(i < 3)
	{
		if (classes[i] == name)
			break ;
		i++;
	}
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates form " << classes[i] << std::endl;
			p = new ShrubberyCreationForm(target);
			break ;
		case 1 :
			std::cout << "Intern creates form " << classes[i] << std::endl;
			p = new RobotomyRequestForm(target);
			break ;
		case 2 :
			std::cout << "Intern creates form " << classes[i] << std::endl;
			p = new PresidentialPardonForm(target);
			break ;
		default :
			throw NoSuchClassException();
			break ;
	}
	return (p);
}
