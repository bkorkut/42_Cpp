/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:25:42 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/21 15:39:32 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	private:
		std::string			type;
	public:
		Weapon(void);
		Weapon(std::string);
		void				setType(std::string);
		const std::string	&getType(void) const;
};

#endif
