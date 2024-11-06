/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:37:53 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 17:48:53 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\33[92mBrain default constructor called\33[0m" << std::endl;
}

Brain::Brain(const Brain &)
{
	std::cout << "\33[92mBrain copy constructor called\33[0m" << std::endl;
}

Brain	&Brain::operator=(const Brain &)
{
	std::cout << "\33[34mBrain copy assignment operator called\33[0m" << std::endl;
}

Brain::~Brain()
{
	std::cout << "\33[31mBrain destructor called\33[0m" << std::endl;
}

