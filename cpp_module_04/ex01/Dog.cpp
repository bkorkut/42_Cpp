/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:24 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/10 20:58:54 by bkorkut          ###   ########.fr       */
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
	this->brain = new Brain(*(other.brain));
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "\33[34mDog copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*(other.brain));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\33[31mDog destructor called\33[0m" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Wof." << std::endl;
}

Brain	&Dog::getBrain(void) const
{
	return(*(this->brain));
}
