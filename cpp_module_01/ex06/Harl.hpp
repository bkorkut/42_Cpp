/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:15:36 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/26 12:01:53 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <map>

class	Harl
{
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		std::map<std::string, void (Harl::*)(void)> fptr;
	public:
				Harl(void);
		void	complain(const std::string &);
};

#endif
