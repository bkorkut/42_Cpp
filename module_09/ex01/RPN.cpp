#include "RPN.hpp"
#include <string>

RPN::RPN() {}

RPN::RPN(const RPN &) {}

RPN RPN::operator=(const RPN &) { return *this; }

RPN::~RPN() {}

const char *RPN::notMatch::what() const throw() {
	return "the number of operands and operators does not match.";
}

const char *RPN::invalidInput::what() const throw() {
	return "invalid input.";
}

void	RPN::doTheMath(char sign)
{
	int	a, b;

	if (stack.size() < 2)
		throw notMatch();
	b = stack.back();
	stack.pop_back();
	a = stack.back();
	stack.pop_back();
	if (sign == '+')
		stack.push_back(a + b);
	else if (sign == '-')
		stack.push_back(a - b);
	else if (sign == '*')
		stack.push_back(a * b);
	else if (sign == '/')
		stack.push_back(a / b);
}

#include <iostream>
void	RPN::processProblem(std::string input)
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
					doTheMath(input[pos]);
				else
					throw invalidInput();
			}
			else
				throw invalidInput();
		}
		else if (pos + 1 == input.size()) {
			if (std::isdigit(input[pos]))
				this->stack.push_back(input[pos] - '0');
			else if (charSet.find(input[pos]) != std::string::npos)
				doTheMath(input[pos]);
			else
				throw invalidInput();
		}
		else
			throw invalidInput();
		pos = foundPos + 1;
	}

	if (stack.size() != 1)
		throw notMatch();
	for (std::vector<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
}