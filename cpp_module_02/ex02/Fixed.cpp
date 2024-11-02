/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:04:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/02 18:13:09 by bkorkut          ###   ########.fr       */
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
	std::cout << "\033[33m< operator called\033[0m" << std::endl;
	return (this->fixed < rhs.fixed);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	std::cout << "\033[33m> operator called\033[0m" << std::endl;
	return (rhs < *this);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	std::cout << "\033[33m>= operator called\033[0m" << std::endl;
	return !(*this < rhs);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	std::cout << "\033[33m<= operator called\033[0m" << std::endl;
	return !(*this > rhs);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	std::cout << "\033[33m== operator called\033[0m" << std::endl;
	return (this->fixed == rhs.fixed);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	std::cout << "\033[33m!= operator called\033[0m" << std::endl;
	return !(*this == rhs);
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	std::cout << "\033[33m+ operator called\033[0m" << std::endl;
	Fixed	tmp(this->toFloat() + rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	std::cout << "\033[33m- operator called\033[0m" << std::endl;
	Fixed	tmp(this->toFloat() - rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	std::cout << "\033[33m* operator called\033[0m" << std::endl;
	Fixed	tmp(this->toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	std::cout << "\033[33m/ operator called\033[0m" << std::endl;
	Fixed	tmp(this->toFloat() / rhs.toFloat());
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	std::cout << "\033[33mprefix increment operator called\033[0m" << std::endl;
	this->fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	std::cout << "\033[33mpostfix increment operator called\033[0m" << std::endl;
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	std::cout << "\033[33mprefix decrement operator called\033[0m" << std::endl;
	this->fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	std::cout << "\033[33mpostfix decrement operator called\033[0m" << std::endl;
	Fixed	old = *this;
	operator--();
	return (old);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	std::cout << "\033[33mmin static member function called\033[0m" << std::endl;
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	std::cout << "\033[33mconst min static member function called\033[0m" << std::endl;
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	std::cout << "\033[33mmax static member function called\033[0m" << std::endl;
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	std::cout << "\033[33mconst max static member function called\033[0m" << std::endl;
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

