/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:20:57 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/14 13:07:36 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
		void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
