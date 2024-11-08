/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:37:53 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/08 16:56:04 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\33[92mBrain default constructor called\33[0m" << std::endl;
	for (char i = 0; i < 100; i++)
		this->ideas[int(i)] = "I don’t want to set the world on fire";
}

Brain::Brain(const Brain &other)
{
	std::cout << "\33[92mBrain copy constructor called\33[0m" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "\33[34mBrain copy assignment operator called\33[0m" << std::endl;
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
