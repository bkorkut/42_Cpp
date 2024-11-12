/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:16 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 10:20:19 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\33[92mAnimal default constructor called\33[0m" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "\33[92mAnimal copy constructor called\33[0m" << std::endl;
	this->type = other.type;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "\33[34mAnimal copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\33[31mAnimal destructor called\33[0m" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal noises" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}
