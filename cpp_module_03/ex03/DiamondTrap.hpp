/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:28:37 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/04 18:13:25 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
				DiamondTrap(void);
				std::string	name;
	public:
				DiamondTrap(std::string &name);
				DiamondTrap(const DiamondTrap &);
				DiamondTrap &operator=(const DiamondTrap &);
				~DiamondTrap(void);
		void	whoAmI(void);
};

#endif
