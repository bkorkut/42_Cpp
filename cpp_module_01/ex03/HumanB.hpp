/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:45:46 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/21 16:21:39 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
		Weapon		*weapon;
		std::string	name;
	public:
					HumanB(std::string);
		void		setWeapon(Weapon &);
		void		attack(void) const;
};

#endif
