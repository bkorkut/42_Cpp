/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:37:14 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/05 16:51:26 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
				ScavTrap(void);
				ScavTrap(std::string &);
				ScavTrap(const ScavTrap &);
				ScavTrap &operator=(const ScavTrap &);
				~ScavTrap(void);
		void	attack(const std::string&);
		void	guardGate(void);
};

#endif
