#include "RPN.hpp"
#include <iostream>
#include <vector>

int	main(int ac, char **av) {
	if (ac == 2) {
		try {
			RPN rpn;
			rpn.processProblem(av[1]);
		}
		catch(const std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	else
		std::cout << "Error: wrong arguments." << std::endl;
}