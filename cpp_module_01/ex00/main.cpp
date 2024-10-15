/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:14:31 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/14 13:31:17 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zombie;

	zombie = newZombie("Zom1");
	zombie->announce();
	randomChump("Zom2");
	delete zombie;
	return (0);
}
