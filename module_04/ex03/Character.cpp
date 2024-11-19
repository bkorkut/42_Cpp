/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:18:45 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/19 14:54:37 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{

}

Character(std::string name) : name(name)
{

}

Character::Character(const Character &other)
{

}

Character	&Character::operator=(const Character &other)
{

}

Character::~Character()
{
	std::cout << "\033[31mCharacter destructor called\033[0m" << std::endl;
}

std::string const & Character::getName() const
{

}

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{

}

