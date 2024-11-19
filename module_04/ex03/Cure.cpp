/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:38:39 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/15 20:09:43 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "\033[34mCure default constructor called\033[0m" << std::endl;
}

Cure::Cure(const Cure &) : AMateria("cure")
{
	std::cout << "\033[34Cure copy constructor called\033[0m" << std::endl;
}

Cure	&Cure::operator=(const Cure &)
{
	std::cout << "\033[92mCure copy assignmrnt operator called\033[0m" << std::endl;
}

Cure::~Cure()
{
	std::cout << "\033[31mCure destructor called\033[0m" << std::endl;
}

AMateria*	Cure::clone() const
{

}

void	Cure::use(ICharacter& target)
{
	std::cout << "* shoots an Cure bolt at " << " *" << std::endl;
}
