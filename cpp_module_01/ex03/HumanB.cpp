/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:46:50 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/21 16:24:22 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string setname) : name(setname) {}

void	HumanB::setWeapon(Weapon &setweapon)
{
	this->weapon = &setweapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their " << (*(this->weapon)).getType() << std::endl;
}
