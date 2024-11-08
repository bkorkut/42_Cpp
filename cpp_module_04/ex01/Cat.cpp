/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:18 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/08 16:53:21 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "\33[92mCat default constructor called\33[0m" << std::endl;
	this->type = "Cat";
	this->brain = new Brain(this->type);
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "\33[92mCat copy constructor called\33[0m" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "\33[34mCat copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\33[31mCat destructor called\33[0m" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoww..." << std::endl;
}

void	Cat::showIdeas(void) const
{
	this->brain->showIdeas();
}
