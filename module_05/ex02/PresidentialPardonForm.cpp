/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:34:25 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 16:30:00 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 72, 45), target("notForeverEmptyTarget")
{
	std::cout << "\033[92mPresidentialPardonForm constructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 72, 45), target(other.target)
{
	std::cout << "\033[92mPresidentialPardonForm constructor called\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 72, 45), target(target)
{
	std::cout << "\033[34mPresidentialPardonForm parameter constructor called\033[0m" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "\033[34mPresidentialPardonForm copy assignment operator called\033[0m" << std::endl;
	this->target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[31mPresidentialPardonForm destructor called\033[0m" << std::endl;
}

void	PresidentialPardonForm::perform() const
{
	// Informs that <target> has been pardoned by Zaphod Beeblebrox
}
