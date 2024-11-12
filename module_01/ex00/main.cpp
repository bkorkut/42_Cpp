/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:14:31 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/18 16:34:44 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// mem alloc, pointers to members, references, switch

#include "Zombie.hpp"

int	main()
{
	Zombie *zombie;

	zombie = newZombie("Zom1");
	zombie->announce();
	randomChump("Zom2");
	delete zombie;
	randomChump("Zom3");
	return (0);
}
