/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:47:40 by bkorkut           #+#    #+#             */
/*   Updated: 2025/02/20 10:48:21 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <sstream>
#include <cerrno>
#include <cstdlib>
#include "ScalarConverter.hpp"

static void	charConvert(char c) {
	std::cout << "char: " << c << std::endl;
}

static void	intConvert(int i) {
	std::cout << "int: " << i << std::endl;
}

static void	floatConvert(float f) {
	std::cout << "float: " << f << std::endl;
}

static void	doubleConvert(double d) {
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::convert(std::string str)
{
	if (str == "inf" || str == "+inf")
		floatConvert(std::numeric_limits<float>::infinity());
	else if (str == "-inf")
		floatConvert(-std::numeric_limits<float>::infinity());
	else if (str == "nan")
		floatConvert(std::numeric_limits<float>::quiet_NaN());
	else if (str == "inff" || str == "+inff")
		floatConvert(std::numeric_limits<double>::infinity());
	else if (str == "-inff")
		floatConvert(-std::numeric_limits<double>::infinity());
	else if (str == "nanf")
		floatConvert(std::numeric_limits<double>::quiet_NaN());
	else if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		charConvert(str[1]);
	else if (str.size() == 4 && str[0] == '\'' && str[0] == '\\' && str[2] == '\'')
	{
		std::stringstream ss;
		ss << str.substr(1, 2);
		char c;
		ss >> std::noskipws >> c;
		charConvert(c);
	}
	else if (str.find('.') != std::string::npos)
	{
		char *endptr = NULL;
		errno = 0;
		if (str.find('f'))
		{
			float f = std::strtof(str.c_str(), &endptr);
			if (!(endptr && *endptr))
				floatConvert(f);
			else
				std::cout << "float Invalid input" << std::endl;
		}
		else
		{
			double d = std::strtod(str.c_str(), &endptr);
			if (!(endptr && *endptr))
				doubleConvert(d);
			else
				std::cout << "Invalid input" << std::endl;
		}
	}
	else if (str.size() > 2 && (str[0] == '+' || str[0] == '-'))
	{
		int	sign = ',' - str[0];
		str.erase(str.begin());
		if (str.find_first_not_of("0123456789") == std::string::npos)
			intConvert(sign * std::atoi(str.c_str()));
		else
			std::cout << "Invalid input" << std::endl;
	}
	else if (str.find_first_not_of("0123456789") == std::string::npos)
		intConvert(std::atoi(str.c_str()));
	else
		std::cout << "Invalid input" << std::endl;
}
