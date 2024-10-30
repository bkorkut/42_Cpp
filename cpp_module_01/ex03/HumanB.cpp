/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:46:50 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/30 10:37:03 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string setname) : weapon(NULL), name(setname) {}

void	HumanB::setWeapon(Weapon &setweapon)
{
	this->weapon = &setweapon;
}

void	HumanB::attack(void) const
{
	if (weapon)
		std::cout << this->name << " attacks with their " << (*(this->weapon)).getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands!" << std::endl;
}
