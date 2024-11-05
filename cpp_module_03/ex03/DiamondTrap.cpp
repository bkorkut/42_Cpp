/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:28:33 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/05 16:55:23 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\033[92mDiamondTrap default constructor called\033[0m" << std::endl;
	ClapTrap::name.append("_clap_name");
	this->hP = 100;
	this->eP = 50;
	this->aD = 30;
}

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "\033[92mDiamondTrap name constructor called\033[0m" << std::endl;
	ClapTrap::name.append("_clap_name");
	this->hP = 100;
	this->eP = 50;
	this->aD = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "\033[92mDiamondTrap copy constructor called\033[0m" << std::endl;
	ClapTrap::name.append("_clap_name");
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "\033[34mDiamondTrap copy assignment operator called\033[0m" << std::endl;
	ClapTrap::name = other.name;
	ClapTrap::name.append("_clap_name");
	this->name = other.name;
	this->hP = other.hP;
	this->eP = other.eP;
	this->aD = other.aD;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[31mDiamondTrap destructor called\033[0m" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My names? Yes you read right, names. They are " << this->name << " and " << ClapTrap::name << ". Don't get me started about identity crisis..." << std::endl;
}
