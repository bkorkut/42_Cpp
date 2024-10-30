/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:18:33 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/30 19:54:27 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c(  0.00390625f );
	Fixed const d( c.toFloat() );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a <<  std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << c.getRawBits() << std::endl;
	std::cout << "d is " << d << d.getRawBits() << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
