#include "RPN.hpp"
#include <string>

RPN::RPN() {}

RPN::RPN(const RPN &) {}

RPN RPN::operator=(const RPN &) { return *this; }

RPN::~RPN() {}


#include <iostream>
void	RPN::setStacks(std::string input)
{
	size_t		pos = 0;
	std::string	charSet = "+-/*";

	for (size_t foundPos = 0; foundPos != std::string::npos;) {
		foundPos = input.find(' ', pos);
		if (foundPos != std::string::npos) {
			if (foundPos == pos + 1) {
				if (std::isdigit(input[pos]))
					this->stack.push_back(input[pos] - '0');
				else if (charSet.find(input[pos]) != std::string::npos)
					this->signs.push_back(input[pos]);
				else
					throw std::exception();
			}
			else
				throw std::exception();
		}
		else if (pos + 1 == input.size()) {
			if (std::isdigit(input[pos]))
				this->stack.push_back(input[pos] - '0');
			else if (charSet.find(input[pos]) != std::string::npos)
				this->signs.push_back(input[pos]);
			else
				throw std::exception();
		}
		else
			throw std::exception();
		pos = foundPos + 1;
	}

	for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	for (std::vector<char>::iterator it = signs.begin(); it != signs.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
}