/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:29:26 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/21 15:40:04 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string settype) : type(settype) {}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}

