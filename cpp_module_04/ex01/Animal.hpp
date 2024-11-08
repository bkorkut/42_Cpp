/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/08 16:53:06 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

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
		virtual void		showIdeas(void) const;
};

#endif
