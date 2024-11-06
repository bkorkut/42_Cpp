/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:57 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 17:34:53 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
					WrongCat();
					WrongCat(const WrongCat &);
		WrongCat	&operator=(const WrongCat &);
					~WrongCat();
		void		makeSound(void) const;
};

#endif
