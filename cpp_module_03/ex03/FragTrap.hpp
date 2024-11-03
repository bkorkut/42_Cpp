/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:12:37 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/03 11:24:24 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:
				FragTrap(void);
	public:
				FragTrap(std::string &name);
				FragTrap(const FragTrap &);
				FragTrap &operator=(const FragTrap &);
				~FragTrap(void);
		void	highFivesGuys(void);
};

#endif
