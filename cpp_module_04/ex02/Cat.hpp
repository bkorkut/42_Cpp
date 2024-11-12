/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:20 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 14:33:37 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
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
