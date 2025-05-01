#include "PmergeMe.hpp"
#include <iostream>

static unsigned int	jacobsthalRecurrenceRelation(unsigned int n) {
	unsigned int ret;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	ret = jacobsthalRecurrenceRelation(n - 1);
	ret += 2 * jacobsthalRecurrenceRelation(n - 2);
	return ret;
}

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
	int	first;

	for (std::list<int>::iterator it = list.begin(); it != list.end();) {
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

bool	comparePairs(const std::pair<int, int> &first, const std::pair<int, int> &second) {
	return (first.first < second.first);
}

void	PmergeMe::insertPair(std::pair<int, int> pair) {
	unsigned int end = 0;
	unsigned int begin = 0;
	std::list<int>::iterator it = list.begin();

	for (; it != list.end(); it++) {
		if (*it == pair.first)
			break;
		end++;
	}
	if (it == list.end())
		return ;

	for (unsigned int i = __INT_MAX__; i > 1;) {
		it = list.begin();
		i = end - begin / 2;
		std::advance(it, begin + i);
		if (*it < pair.second)
			begin += i;
		else
			end = begin + i - 1;
	}
	it = list.begin();
	std::advance(it, begin);
	list.insert(it, pair.second);
}

void	PmergeMe::jacobstalLoop(unsigned int currJacob, unsigned int prevJacob) {
	std::list<std::pair<int,int> >::iterator it = mergeList.begin();

	std::cout << "jacobstal loop begin with currJ " << currJacob << " prevJ " << prevJacob << std::endl;
	if (currJacob == 1) {
		insertPair(*it);
		mergeList.erase(it);
		std::cout << "jacobstal loop end" << std::endl;
		return ;
	}

	for (std::list<int>::iterator ii = list.begin(); ii != list.end(); ii++)
		std::cout << *ii << " ";
	std::cout << std::endl;
	for (std::list<std::pair<int,int> >::iterator ii = mergeList.begin(); ii != mergeList.end(); ii++)
		std::cout << ii->first << " - " << ii->second << " : ";
	std::cout << std::endl;

	for (; (currJacob != prevJacob); currJacob--) {
		std::cout << "currJ " << currJacob << " prevJ " << prevJacob << std::endl;
		it = mergeList.begin();
		std::advance(it, currJacob - prevJacob - 1);
		std::cout << " *it " << it->first << std::endl;
		insertPair(*it);
		mergeList.erase(it);

		for (std::list<int>::iterator ii = list.begin(); ii != list.end(); ii++)
			std::cout << *ii << " ";
		std::cout << std::endl;
		for (std::list<std::pair<int,int> >::iterator ii = mergeList.begin(); ii != mergeList.end(); ii++)
			std::cout << ii->first << " - " << ii->second << " : ";
		std::cout << std::endl;
	}

	std::cout << "jacobstal loop end" << std::endl;
}

void	PmergeMe::insertionLoop(void) {
	int				jacobstralIndex = 2;
	unsigned int	currJacob;
	unsigned int	prevJacob = 0;
	unsigned int	listMax = mergeList.size();

	mergeList.sort(comparePairs);
	for (bool loop = 1; loop != 0;) {
		std::cout << "insertion loop begin" << std::endl;
		currJacob = jacobsthalRecurrenceRelation(jacobstralIndex);
		if (listMax < currJacob) {
			currJacob = listMax;
			loop = !loop;
		}
		jacobstalLoop(currJacob, prevJacob);
		prevJacob = currJacob;
		jacobstralIndex++;
		std::cout << "insertion loop end" << std::endl;
	}
}

void	PmergeMe::fordJohnson() {
	std::list<std::pair<int, int> >	recursionList;

	if (isSorted())
		return ;
	// else if (list.size() <= 3) {
	// 	sort3();
	// }
	else {
		separate();
		recursionList = mergeList;
		// fordJohnson();
		mergeList = recursionList;
		insertionLoop();
	}
}
