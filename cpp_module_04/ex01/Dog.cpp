/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:24 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/08 16:50:57 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "\33[92mDog default constructor called\33[0m" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
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
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Wof." << std::endl;
}

void	Dog::showIdeas(void) const
{
	this->brain->showIdeas();
}
