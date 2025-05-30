/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:24 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 15:47:25 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "\33[92mDog default constructor called\33[0m" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "\33[92mDog copy constructor called\33[0m" << std::endl;
	this->type = other.type;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "\33[34mDog copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\33[31mDog destructor called\33[0m" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Wof." << std::endl;
}
