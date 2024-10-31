/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:04:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/31 16:42:23 by bkorkut          ###   ########.fr       */
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

void	Fixed::operator>(void);
void	Fixed::operator<(void);
void	Fixed::operator>=(void);
void	Fixed::operator<=(void);
void	Fixed::operator==(void);
void	Fixed::operator!=(void);
void	Fixed::operator+(void);
void	Fixed::operator-(void);
void	Fixed::operator*(void);
void	Fixed::operator/(void);
Fixed	&Fixed::operator++()
{
	this->fixed += 1.0 / (1 << fractional_bits);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	operator++();
	return (old);
}

void	Fixed::operator--(void);
void	Fixed::operator--(void);
