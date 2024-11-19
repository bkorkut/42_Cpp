/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:24:01 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/19 14:24:13 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria &)
{

}

AMateria&	AMateria::operator=(const AMateria &)
{

}

AMateria::AMateria(std::string const & type)
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(std::string const & type)
{

}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{

}

