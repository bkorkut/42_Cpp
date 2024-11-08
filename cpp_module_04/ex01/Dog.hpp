/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:22 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/08 16:48:03 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*brain;
	public:
				Dog();
				Dog(const Dog &);
		Dog		&operator=(const Dog &);
				~Dog();
		void	makeSound(void) const;
		void	showIdeas(void) const;
};

#endif
