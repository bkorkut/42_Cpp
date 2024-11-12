/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 17:33:28 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\33[92mWrongAnimal default constructor called\33[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "\33[92mWrongAnimal copy constructor called\33[0m" << std::endl;
	this->type = other.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "\33[34mWrongAnimal copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\33[31mWrongAnimal destructor called\33[0m" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal noises" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->type);
}
