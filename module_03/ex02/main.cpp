/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:12:49 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/05 17:11:47 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::string	name = "Jiraiya";
	FragTrap	toadSage;

	toadSage.attack("Orochi");
	toadSage.takeDamage(5);
	toadSage.beRepaired(3);
	toadSage.takeDamage(9);
	toadSage.beRepaired(10);
	toadSage.highFivesGuys();
}
