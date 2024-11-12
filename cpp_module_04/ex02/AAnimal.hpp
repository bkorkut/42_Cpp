/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 10:21:12 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
// # include "Brain.hpp"

class	AAnimal
{
	protected:
		std::string	type;
	public:
							AAnimal();
							AAnimal(const AAnimal &);
		AAnimal				&operator=(const AAnimal &);
		virtual				~AAnimal();
		virtual void		makeSound(void) const = 0;
		const std::string	&getType(void) const;
};

#endif
