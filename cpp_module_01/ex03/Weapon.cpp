/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:29:26 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/20 20:33:17 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::get_type(void) const
{
	return (this->type);
}

void	Weapon::set_type(std::string str)
{
	this->type = str;
}

