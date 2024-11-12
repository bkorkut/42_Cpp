/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/20 19:55:23 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*zombie_horde;
	int		n = 5;

	zombie_horde = zombieHorde(n, "name");
	for (int i = 0; i < n; i++)
		zombie_horde[i].announce();
	delete[] zombie_horde;
}
