/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:26:48 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/18 16:38:00 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string setname) : name(setname) {}

void	Zombie::announce(void)
{
	std::cout << "\033[92m" << this->name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

Zombie:: ~Zombie(void)
{
	std::cout << "\033[31mZombie " << this->name << " is dead\033[0m" << std::endl;
}
