/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:04:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/30 17:11:34 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : fixed(0)
{
	std::cout << "\033[92mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy) : fixed(toCopy.fixed)
{
	std::cout << "\033[92mCopy constructor called\033[0m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "\033[34mCopy assignment operator called\033[0m" << std::endl;
	this->fixed = toCopy.fixed;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "\033[31mDestructor called\033[0m" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "\033[33mgetRawBits member function called\033[0m" << std::endl;
	return (this->fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "\033[33msetRawBits member function called\033[0m" << std::endl;
	this->fixed = raw;
}
