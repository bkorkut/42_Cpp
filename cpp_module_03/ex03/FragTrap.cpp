/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:12:39 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/04 18:05:32 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "\033[92mFragTrap name constructor called\033[0m" << std::endl;
	this->hP = 100;
	this->eP = 100;
	this->aD = 30;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << "\033[92mFragTrap copy constructor called\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
	std::cout << "\033[92mFragTrap copy assignment operator called\033[0m" << std::endl;
	this->name = toCopy.name;
	this->hP = toCopy.hP;
	this->eP = toCopy.eP;
	this->aD = toCopy.aD;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[92mFragTrap destructor called\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[92mFragTrap requests a high five from everybody\033[0m" << std::endl;
}
