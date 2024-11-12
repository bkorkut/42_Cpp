/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:20 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/10 20:36:56 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*brain;
	public:
				Cat();
				Cat(const Cat &);
		Cat		&operator=(const Cat &);
				~Cat();
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
};

#endif
