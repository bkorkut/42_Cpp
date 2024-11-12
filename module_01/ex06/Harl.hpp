/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:15:36 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/27 14:38:07 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class	Harl
{
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
		std::string	levels[4];
		void		(Harl::*functs[4])(void);
	public:
							Harl(void);
		void				complain(const std::string &);
		const std::string	&get_level(int) const;
};

#endif
