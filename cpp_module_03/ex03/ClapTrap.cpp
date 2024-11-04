/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:44:35 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/04 18:06:16 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string &name) : name(name), hP(10), eP(10), aD(0)
{
	std::cout << "\033[92mClapTrap name constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) : name(toCopy.name), hP(toCopy.hP), eP(toCopy.eP), aD(toCopy.aD)
{
	std::cout << "\033[92mClapTrap copy constructor called\033[0m" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &toCopy)
{
	std::cout << "\033[34mClapTrap copy assignment operator called\033[0m" << std::endl;
	this->name = toCopy.name;
	this->hP = toCopy.hP;
	this->eP = toCopy.eP;
	this->aD = toCopy.aD;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[31mClapTrap destructor called\033[0m" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hP)
	{
		if (this->eP == 0)
			std::cout << "ClapTrap " << this->name << " has no eP to attack." << std::endl;
		else
		{
			this->eP -= 1;
			std::cout << "ClapTrap " << this->name << " attacks " << target
						<< ", causing " << this->aD << " aD!" << std::endl
						<< "Current eP: " << this->eP << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << this->name << " is dead. You can't attack with him." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hP == 0)
		std::cout << "ClapTrap " << this->name << " is dead. You can't heal him." << std::endl;
	else if (this->hP <= amount)
	{
		this->hP = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " aD."
					<< std::endl << "Current hP: " << this->hP << std::endl;
	}
	else
	{
		this->hP -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " aD."
					<< std::endl << "Current hP: " << this->hP << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hP)
	{
		if (this->eP == 0)
			std::cout << "ClapTrap " << this->name << " has no eP to repair." << std::endl;
		else
		{
			this->eP -= 1;
			this->hP += amount;
			std::cout << "ClapTrap " << this->name << " repairs " << amount << " hP."
						<< std::endl << "Current eP: " << this->eP << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << this->name << " is dead. You can't repair him." << std::endl;
}
