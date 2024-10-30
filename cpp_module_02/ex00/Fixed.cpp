/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:04:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/28 11:14:08 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixed(0) {}

Fixed::Fixed(const Fixed &toCopy) : fixed(toCopy.fixed) {}

Fixed &Fixed::operator=(const Fixed &toCopy)
{
	this->fixed = toCopy.fixed;
	return (*this);
}

Fixed::~Fixed() {}
