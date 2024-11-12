/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:52 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 17:34:19 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "\33[92mWrongCat default constructor called\33[0m" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "\33[92mWrongCat copy constructor called\33[0m" << std::endl;
	this->type = other.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "\33[34mWrongCat copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\33[31mWrongCat destructor called\33[0m" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meoww..." << std::endl;
}
