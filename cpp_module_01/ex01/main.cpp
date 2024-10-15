/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/14 14:07:32 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_horde;

	zombie_horde = zombieHorde(5, "names");
	for (int i = 0; i < 5; i++)
		zombie_horde[i].announce();
	delete[] zombie_horde;
}
