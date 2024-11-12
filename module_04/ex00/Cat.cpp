/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:18 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 15:47:11 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "\33[92mCat default constructor called\33[0m" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "\33[92mCat copy constructor called\33[0m" << std::endl;
	this->type = other.type;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "\33[34mCat copy assignment operator called\33[0m" << std::endl;
	this->type = other.type;
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
