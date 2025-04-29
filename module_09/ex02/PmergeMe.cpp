#include "PmergeMe.hpp"
#include <iostream>

// static unsigned int	jacobsthalRecurrenceRelation(unsigned int n) {
// 	unsigned int ret;

// 	if (n == 0)
// 		return 0;
// 	else if (n == 1)
// 		return 1;
// 	ret = jacobsthalRecurrenceRelation(n - 1);
// 	ret += 2 * jacobsthalRecurrenceRelation(n - 2);
// 	return ret;
// }

// static unsigned int	jacobsthalRecurrenceRelation(unsigned int n1, unsigned int n2) {
// 	return n1 + 2 * n2;
// }

PmergeMe::PmergeMe(std::list<int> list) : list(list) {}

PmergeMe::~PmergeMe() {}

unsigned int PmergeMe::sizelist() {
	return list.size();
}

bool	PmergeMe::isSorted(void) {
	for (std::list<int>::iterator i = list.begin(); i != list.end(); i++) {
		if (++i == list.end())
			break ;
		else if (*i < *(--i))
			return false;
	}
	return true;
}

void	PmergeMe::separate(void) {
	int								first;

	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) {
		first = *(it++);
		if (it == list.end()) {
			it = list.erase(--it);
		}
		else if (first > *it) {
			mergeList.push_back(std::pair<int, int>(first, *it));
			it = list.erase(it);
		}
		else {
			mergeList.push_back(std::pair<int, int>(*(it--), first));
			it = list.erase(it);
		}
	}
}

void	PmergeMe::merge(void) {
	// find the jacobstral number
	
}

void	PmergeMe::fordJohnson() {
	std::list<std::pair<int, int>>	recursionList;
	bool							unpaired = 0;
	int								uElement;

	if (isSorted())
		return ;
	else if (list.size() <= 3) {
		sort3();
	}
	else {
		separate();
		recursionList = mergeList;
		fordJohnson();
		merge();
	}
}
