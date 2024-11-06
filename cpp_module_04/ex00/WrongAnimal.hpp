/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:49 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 17:34:40 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
							WrongAnimal();
							WrongAnimal(const WrongAnimal &);
		WrongAnimal			&operator=(const WrongAnimal &);
							~WrongAnimal();
		void				makeSound(void) const;
		const std::string	&getType(void) const;
};

#endif
