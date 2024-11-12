/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:13 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 20:10:56 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

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
