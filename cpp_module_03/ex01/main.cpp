/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:37:09 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/03 11:08:50 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::string	name = "Wall-E";
	ScavTrap	Wall_e(name);

	Wall_e.attack("unikitty");
	Wall_e.takeDamage(5);
	Wall_e.beRepaired(3);
	for (int i = 9; i >= 0; i--)
		Wall_e.attack("unikitty");
	Wall_e.takeDamage(9);
	Wall_e.beRepaired(10);
	Wall_e.attack("unikitty");
}
