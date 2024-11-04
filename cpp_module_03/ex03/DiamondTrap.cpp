/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:28:33 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/04 18:27:13 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "\033[92mDiamondTrap name constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy), name(toCopy.name)
{
	std::cout << "\033[92mDiamondTrap copy constructor called\033[0m" << std::endl;
	ClapTrap::name.append("_clap_name");
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	std::cout << "\033[92mDiamondTrap copy constructor called\033[0m" << std::endl;
	ClapTrap::name = toCopy.name;
	ClapTrap::name.append("_clap_name");
	this->name = toCopy.name;
	this->hP = toCopy.hP;
	this->eP = toCopy.eP;
	this->aD = toCopy.aD;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{

}

void	DiamondTrap::whoAmI(void)
{

}
