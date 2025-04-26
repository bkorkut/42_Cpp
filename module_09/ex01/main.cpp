#include "RPN.hpp"
#include <iostream>
#include <vector>


int	main(int ac, char **av) {
	if (ac == 2) {
		try {
			RPN reversePolishNotation;
			reversePolishNotation.setStacks(av[1]);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "Error: wrong arguments." << std::endl;
}