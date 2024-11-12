/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:16 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 20:11:09 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "\33[92mAAnimal default constructor called\33[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "\33[92mAAnimal copy constructor called\33[0m" << std::endl;
	this->type = other.type;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << "\33[34mAAnimal copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "\33[31mAAnimal destructor called\33[0m" << std::endl;
}

const std::string	&AAnimal::getType(void) const
{
	return (this->type);
}
