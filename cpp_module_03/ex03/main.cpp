/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:28:08 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/05 17:13:48 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::string	name = "Dia";
	DiamondTrap	dia(name);
	dia.whoAmI();
	dia.attack("sunShade");
	dia.takeDamage(5);
	dia.guardGate();
	dia.beRepaired(3);
	dia.takeDamage(9);
	dia.highFivesGuys();
	dia.beRepaired(10);
	dia.attack("sunShade");
	dia.ClapTrap::attack("otherSunShade");
}
