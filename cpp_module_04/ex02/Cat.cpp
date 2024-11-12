/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:18 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 14:36:21 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "\33[92mCat default constructor called\33[0m" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal()
{
	std::cout << "\33[92mCat copy constructor called\33[0m" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "\33[34mCat copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*(other.brain));
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\33[31mCat destructor called\33[0m" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww..." << std::endl;
}

Brain	&Cat::getBrain(void) const
{
	return(*(this->brain));
}
