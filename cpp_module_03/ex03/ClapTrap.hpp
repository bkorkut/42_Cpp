/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:44:33 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/05 16:46:11 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class	ClapTrap
{
	protected:
		std::string		name;
		unsigned int	hP;
		unsigned int	eP;
		unsigned int	aD;
	public:
				ClapTrap(void);
				ClapTrap(std::string &);
				ClapTrap(const ClapTrap &);
				ClapTrap &operator=(const ClapTrap &);
				~ClapTrap(void);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
