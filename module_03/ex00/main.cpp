/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:29:51 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/03 11:08:37 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string	name = "Bumblebee";
	ClapTrap	bumblebee(name);

	bumblebee.attack("emmet");
	bumblebee.takeDamage(5);
	bumblebee.beRepaired(3);
	for (int i = 9; i >= 0; i--)
		bumblebee.attack("emmet");
	bumblebee.takeDamage(9);
	bumblebee.beRepaired(10);
	bumblebee.attack("emmet");
}
