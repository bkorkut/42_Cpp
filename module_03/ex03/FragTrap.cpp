/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:12:39 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/05 17:14:57 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "\033[92mFragTrap default constructor called\033[0m" << std::endl;
	this->hP = 100;
	this->eP = 100;
	this->aD = 30;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "\033[92mFragTrap name constructor called\033[0m" << std::endl;
	this->hP = 100;
	this->eP = 100;
	this->aD = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "\033[92mFragTrap copy constructor called\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "\033[34mFragTrap copy assignment operator called\033[0m" << std::endl;
	this->name = other.name;
	this->hP = other.hP;
	this->eP = other.eP;
	this->aD = other.aD;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[31mFragTrap destructor called\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests a high five from everybody!" << std::endl;
}
