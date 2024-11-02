/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:04:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/02 15:51:19 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : fixed(0)
{
	std::cout << "\033[92mDefault constructor called\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy) : fixed(toCopy.fixed)
{
	std::cout << "\033[92mCopy constructor called\033[0m" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "\033[92mInt constructor called\033[0m" << std::endl;
	this->fixed = n * (1 << fractional_bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "\033[92mFloat constructor called\033[0m" << std::endl;
	this->fixed = roundf(n * (1 << fractional_bits));
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed) / (1 << fractional_bits));
}

int	Fixed::toInt(void) const
{
	return ((this->fixed) / (1 << fractional_bits));
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->fixed < rhs.fixed);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (*this < rhs);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return !(*this < rhs);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return !(*this > rhs);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->fixed == rhs.fixed);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return !(*this == rhs);
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	tmp(this->toFloat() + rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	tmp(this->toFloat() - rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	tmp(this->toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	tmp(this->toFloat() / rhs.toFloat());
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	this->fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;
	operator--();
	return (old);
}

static Fixed	Fixed::&min(Fixed &lhs, Fixed &rhs);
{
	return (lhs);
}

static	const Fixed Fixed::&min(const Fixed &lhs, const Fixed &rhs);
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

static	Fixed Fixed::&max(Fixed &lhs, Fixed &rhs);
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

static	const Fixed::Fixed &max(const Fixed &lhs, const Fixed &rhs);
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

