/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:37:53 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/10 20:30:13 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\33[92mBrain default constructor called\33[0m" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "\33[92mBrain copy constructor called\33[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "\33[34mBrain copy assignment operator called\33[0m" << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "\33[31mBrain destructor called\33[0m" << std::endl;
}

void	Brain::showIdeas(void) const
{
	for (char i = 0; i < 100; i++)
		std::cout << this->ideas[int(i)] << std::endl;
}

void	Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}

const std::string	&Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
