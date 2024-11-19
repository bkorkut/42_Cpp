/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:38:41 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/15 20:08:18 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "\033[34mIce default constructor called\033[0m" << std::endl;
}

Ice::Ice(const Ice &) : AMateria("ice")
{
	std::cout << "\033[34Ice copy constructor called\033[0m" << std::endl;
}

Ice	&Ice::operator=(const Ice &)
{
	std::cout << "\033[92mIce copy assignmrnt operator called\033[0m" << std::endl;
}

Ice::~Ice()
{
	std::cout << "\033[31mIce destructor called\033[0m" << std::endl;
}

AMateria*	Ice::clone() const
{

}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << " *" << std::endl;
}
