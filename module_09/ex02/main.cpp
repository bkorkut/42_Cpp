#include "PmergeMe.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <deque>

int	main(int ac, char **av)
{
	if (ac >= 2) {
		std::list<int> list;
		std::deque<int> deque;
		for (int i = 1; i < ac; i++) {
			list.push_back(std::atoi(av[i]));
			deque.push_back(std::atoi(av[i]));
		}
		PmergeMe<std::list> program(list);
		PmergeMe<std::deque> program(deque);
		program.fordJohnson();
	}
}