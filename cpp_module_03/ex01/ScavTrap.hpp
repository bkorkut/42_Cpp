/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:37:14 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/02 21:40:15 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
				ScavTrap(std::string &name);
				ScavTrap(const ScavTrap &);
				ScavTrap &operator=(const ScavTrap &);
				~ScavTrap(void);
		void	attack(const std::string& target);
};

#endif
