/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:05 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/14 14:11:31 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie_horde;

	zombie_horde = new Zombie[N];
	// for (int i = 0; i < N; i++)
	// 	zombie_horde[i] = Zombie(name);
	return (zombie_horde);
}
