/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:20 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 17:35:04 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
				Cat();
				Cat(const Cat &);
		Cat		&operator=(const Cat &);
				~Cat();
		void	makeSound(void) const;
};

#endif
