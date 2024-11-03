/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:37:11 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/03 11:14:49 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "\033[92mScavTrap name constructor called\033[0m" << std::endl;
	this->hP = 100;
	this->eP = 50;
	this->aD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << "\033[92mScavTrap copy constructor called\033[0m" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &toCopy)
{
	std::cout << "\033[34mScavTrap copy assignment operator called\033[0m" << std::endl;
	this->name = toCopy.name;
	this->hP = toCopy.hP;
	this->eP = toCopy.eP;
	this->aD = toCopy.aD;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[31mScavTrap destructor called\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hP)
	{
		if (this->eP == 0)
			std::cout << "ScavTrap " << this->name << " has no eP to attack." << std::endl;
		else
		{
			this->eP -= 1;
			std::cout << "ScavTrap " << this->name << " attacks " << target
						<< ", causing " << this->aD << " aD!" << std::endl
						<< "Current eP: " << this->eP << std::endl;
		}
	}
	else
		std::cout << "ScavTrap " << this->name << " is dead. You can't attack with him." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " entered Gate keeper mode." << std::endl;
}
