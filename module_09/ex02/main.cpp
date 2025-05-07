#include "PmergeMe.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <deque>
#include <ctime>

int	main(int ac, char **av)
{
	if (ac >= 2) {
		std::list<int> list;
		std::deque<int> deque;
		for (int i = 1; i < ac; i++) {
			list.push_back(std::atoi(av[i]));
			deque.push_back(std::atoi(av[i]));
		}

		PmergeMe<std::list> p1(list);
		PmergeMe<std::deque> p2(deque);

		std::cout << "Before:	";
		p1.printList();

		clock_t start = clock();
		p1.fordJohnson();
		clock_t end = clock();
		double duration1 = double(end - start) / CLOCKS_PER_SEC;

		start = clock();
		p2.fordJohnson();
		end = clock();
		double duration2 = double(end - start) / CLOCKS_PER_SEC;

		std::cout << "After:	";
		p1.printList();

		std::cout << std::fixed;
		std::cout << "Time to process a range of " << p1.size() << " elements with std::list	: " << duration1 * 1000000 << " ms" << std::endl;
		std::cout << "Time to process a range of " << p2.size() << " elements with std::deque	: " << duration2 * 1000000 << " ms" << std::endl;
	}
}