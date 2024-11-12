/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:22 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 14:33:53 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	private:
		Brain	*brain;
	public:
				Dog();
				Dog(const Dog &);
		Dog		&operator=(const Dog &);
				~Dog();
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
};

#endif
