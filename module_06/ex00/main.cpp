/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:43:07 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/10 18:55:55 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"
#include <cmath>
/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/

	//ScalarConverter::convert(*av);
	//std::cout.setf(std::ios::showpoint);

#include <cstdint>
int	main()
{
	double a = 2.3f;
	std::cout << std::floor(a) << std::endl;
	std::int8_t i{65};
	std::cout << i << std::endl;
}
