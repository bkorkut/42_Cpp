/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:24:01 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/13 23:35:21 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{

}

std::string const &AMateria::getType() const
{
	return (this->type);
}

virtual void AMateria::use(ICharacter& target)
{

}

