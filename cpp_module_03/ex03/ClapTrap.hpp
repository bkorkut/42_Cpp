/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:44:33 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/04 18:09:23 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class	ClapTrap
{
	private:
				ClapTrap(void);
	protected:
		std::string		name;
		unsigned int	hP;
		unsigned int	eP;
		unsigned int	aD;
	public:
				ClapTrap(std::string &name);
				ClapTrap(const ClapTrap &);
				ClapTrap &operator=(const ClapTrap &);
				~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
