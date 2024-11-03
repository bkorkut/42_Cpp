/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:37:14 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/03 11:14:24 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
				ScavTrap(void);
	public:
				ScavTrap(std::string &name);
				ScavTrap(const ScavTrap &);
				ScavTrap &operator=(const ScavTrap &);
				~ScavTrap(void);
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
