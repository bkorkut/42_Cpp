/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/10 20:38:00 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class	Animal
{
	protected:
		std::string	type;
	public:
							Animal();
							Animal(const Animal &);
		Animal				&operator=(const Animal &);
		virtual				~Animal();
		virtual void		makeSound(void) const;
		const std::string	&getType(void) const;
		// virtual	Brain		&getBrain(void) const = 0;
};

#endif
