#include "PmergeMe.hpp"
#include <cstdlib>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac >= 2) {
		std::list<int> list;
		for (int i = 1; i < ac; i++)
			list.push_back(std::atoi(av[i]));
		PmergeMe program(list);
		fordJohnson(program);
	}
}
