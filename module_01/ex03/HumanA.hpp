/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:34:24 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/21 16:15:28 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
		Weapon		&weapon;
		std::string	name;
	public:
					HumanA(std::string, Weapon &);
		void		setWeapon(Weapon);
		void		attack(void) const;
};

#endif
