/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:07 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/18 16:58:10 by bkorkut          ###   ########.fr       */
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
		void				set_name(std::string name);
		const std::string	&get_name(void) const;
		void				announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
