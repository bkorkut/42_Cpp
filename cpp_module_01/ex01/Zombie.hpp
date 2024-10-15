/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:07 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/14 13:17:50 by bkorkut          ###   ########.fr       */
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

Zombie	*zombieHorde(int N, std::string name);

#endif
