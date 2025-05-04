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

PmergeMe::PmergeMe(std::list<int> list) : list(list), unpaired(false) {}

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
	std::__cxx11::list<std::pair<int, int>>;
	for (std::list<int>::iterator it = list.begin(); it != list.end();) {
		upNumber = *(it++);
		if (it == list.end()) {
			it = list.erase(--it);
			unpaired = true;
		}
		else if (upNumber > *it) {
			mergeList->push_back(std::pair<int, int>(upNumber, *it));
			it = list.erase(it);
		}
		else {
			mergeList->push_back(std::pair<int, int>(*(it--), upNumber));
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
	if (begin == 0 && end == 0)
		return list.push_front(pair.second);
	std::cout << "pair " << pair.first << " : " << pair.second << std::endl;
	for (unsigned int halfPos = __INT_MAX__; (end - begin) > 0;) {
		it = list.begin();
		std::cout << "begin " << begin << " end " << end << std::endl;
		halfPos = begin + (end - begin) / 2;
		std::cout << "halfPos " << halfPos << std::endl;
		std::advance(it, halfPos);
		std::cout << "insertion is before " << *it << std::endl;
		if (*it < pair.second)
			begin = halfPos + 1;
		else
			end = halfPos;
	}
	std::cout << begin << end << std::endl;
	it = list.begin();
	std::advance(it, end);
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
			// insert unpaired!
		}
		jacobstalLoop(currJacob, prevJacob);
		prevJacob = currJacob;
		jacobstralIndex++;
		std::cout << "insertion loop end" << std::endl;
	}
}

void	PmergeMe::fordJohnson() {
	std::list<std::pair<int, int> >	*recursionList;
	bool							recursionUnpaired;
	int								recursionUpNumber;

	if (isSorted())
		return ;
	// else if (list.size() <= 3) {
	// 	sort3();
	// }
	else {
		separate();
		recursionList = mergeList;
		recursionUnpaired = unpaired;
		recursionUpNumber = upNumber;
		fordJohnson();
		mergeList = recursionList;
		unpaired = recursionUnpaired;
		upNumber = recursionUpNumber;
		insertionLoop();
	}
}
