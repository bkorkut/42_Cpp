/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:10 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/20 19:37:34 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {}

Zombie::Zombie(std::string setname) : name(setname) {}

void	Zombie::announce(void)
{
	std::cout << "\033[92m" << this->name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

const std::string	&Zombie::get_name(void) const
{
	return (this->name);
}

Zombie:: ~Zombie(void)
{
	std::cout << "\033[31mZombie " << this->name << " is dead\033[0m" << std::endl;
}
