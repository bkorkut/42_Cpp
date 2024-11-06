/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:38:02 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 21:52:59 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
				Brain();
				Brain(const std::string &);
				Brain(const Brain &);
		Brain	&operator=(const Brain &);
				~Brain();
};

#endif
