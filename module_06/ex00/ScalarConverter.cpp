/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:47:40 by bkorkut           #+#    #+#             */
/*   Updated: 2025/03/20 19:11:13 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <sstream>
#include <cerrno>
#include <cstdlib>
#include <cmath>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }

ScalarConverter ScalarConverter::operator=(const ScalarConverter &other) { return (void)other, *this; }

ScalarConverter::~ScalarConverter() {}

static void	charConvert(char c) {
	if (std::isprint(c))
		std::cout << "char: '" << c << '\'' << std::endl;
	else
		std::cout << "char: Non diplayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void	intConvert(int i) {
	if (i >= std::numeric_limits<char>::min() && i <= std::numeric_limits<char>::max())
	{
		char c = static_cast<char>(i);
		if (std::isprint(c))
			std::cout << "char: '" << c << '\'' << std::endl;
		else
			std::cout << "char: Non diplayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

static void	floatConvert(float f) {
	if (f >= std::numeric_limits<char>::min() && f <= std::numeric_limits<char>::max())
	{
		char c = static_cast<char>(f);
		if (std::isprint(c))
			std::cout << "char: '" << c << '\'' << std::endl;
		else
			std::cout << "char: Non diplayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (std::floor(f) == f) {
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	else {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

static void	doubleConvert(double d) {
	if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max())
	{
		char c = static_cast<char>(d);
		if (std::isprint(c))
			std::cout << "char: '" << c << '\'' << std::endl;
		else
			std::cout << "char: Non diplayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (std::floor(d) == d) {
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else {
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void	ScalarConverter::convert(std::string str)
{
	if (str == "inff" || str == "+inff")
		floatConvert(std::numeric_limits<float>::infinity());
	else if (str == "-inff")
		floatConvert(-std::numeric_limits<float>::infinity());
	else if (str == "nanf")
		floatConvert(std::numeric_limits<float>::quiet_NaN());
	else if (str == "inf" || str == "+inf")
		doubleConvert(std::numeric_limits<double>::infinity());
	else if (str == "-inf")
		doubleConvert(-std::numeric_limits<double>::infinity());
	else if (str == "nan")
		doubleConvert(std::numeric_limits<double>::quiet_NaN());
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
		if (str.find('f') != std::string::npos)
		{
			str.erase(str.size() - 1);
			float f = std::strtof(str.c_str(), &endptr);
			if (!(endptr && *endptr))
				floatConvert(f);
			else
				std::cout << "Invalid input" << std::endl;
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
