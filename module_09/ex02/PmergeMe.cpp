#include "PmergeMe.hpp"
#include <iostream>
#include <list>
#include <deque>
#include <algorithm>

static size_t	jacobsthalRecurrenceRelation(size_t n) {
	size_t ret;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	ret = jacobsthalRecurrenceRelation(n - 1);
	ret += 2 * jacobsthalRecurrenceRelation(n - 2);
	return ret;
}

template < template <typename, typename> class Container>
PmergeMe<Container>::PmergeMe() {}

template < template <typename, typename> class Container>
PmergeMe<Container>::PmergeMe(const PmergeMe<Container> &other) : list(other.list) {}

template < template <typename, typename> class Container>
PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe<Container> &other) {
	if (this != &other)
		list = other.list;
	return *this;
}

template < template <typename, typename> class Container>
PmergeMe<Container>::PmergeMe(Container<int, std::allocator<int> > list) : list(list), unpaired(false) {}

template < template <typename, typename> class Container>
PmergeMe<Container>::~PmergeMe() {}

template < template <typename, typename> class Container>
size_t PmergeMe<Container>::size() {
	return list.size();
}

template < template <typename, typename> class Container>
bool	PmergeMe<Container>::isSorted(void) {
	for (typename Container<int, std::allocator<int> >::iterator i = list.begin(); i != list.end(); i++) {
		if (++i == list.end())
			break ;
		else if (*i < *(--i))
			return false;
	}
	return true;
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::separate(void) {
	mergeList = new Container<std::pair<int, int>, std::allocator<std::pair<int, int> > >();
	unpaired = false;
	for (typename Container<int, std::allocator<int> >::iterator it = list.begin(); it != list.end();) {
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
			it++;
		}
	}
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::insertPair(std::pair<int, int> pair) {
	size_t end = 0;
	size_t begin = 0;
	typename Container<int, std::allocator<int> >::iterator it = list.begin();

	for (; it != list.end(); it++) {
		if (*it == pair.first)
		break;
		end++;
	}
	if (it == list.end())
		return ;
	if (begin == 0 && end == 0)
		return list.insert(list.begin(), pair.second), void();
	for (size_t halfPos; (end - begin) > 0;) {
		it = list.begin();
		halfPos = begin + (end - begin) / 2;
		std::advance(it, halfPos);
		if (*it < pair.second)
		begin = halfPos + 1;
		else
		end = halfPos;
	}
	it = list.begin();
	std::advance(it, end);
	list.insert(it, pair.second);
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::insertUnpaired() {
	size_t end = list.size();
	size_t begin = 0;
	typename Container<int, std::allocator<int> >::iterator it = list.begin();

	if (begin == 0 && end == 0)
		return list.insert(list.begin(), upNumber), void();
	for (size_t halfPos; (end - begin) > 0;) {
		it = list.begin();
		halfPos = begin + (end - begin) / 2;
		std::advance(it, halfPos);
		if (*it < upNumber)
		begin = halfPos + 1;
		else
		end = halfPos;
	}
	it = list.begin();
	std::advance(it, end);
	list.insert(it, upNumber);
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::jacobsthalLoop(size_t currJacob, size_t prevJacob) {
	typename Container<std::pair<int, int>, std::allocator<std::pair<int,int> > >::iterator it;

	for (; (currJacob != prevJacob); currJacob--) {
		it = mergeList->begin();
		std::advance(it, currJacob - prevJacob - 1);
		insertPair(*it);
		mergeList->erase(it);
	}
}

bool	comparePairs(const std::pair<int, int> &first, const std::pair<int, int> &second) {
	return (first.first < second.first);
}

template < template <typename, typename> class Container>
void	sortMergeList(Container<std::pair<int, int>, std::allocator<std::pair<int, int> > > &list) {
	std::sort(list.begin(), list.end(), comparePairs);
}

template <>
void	sortMergeList<std::list>(std::list<std::pair<int, int>, std::allocator<std::pair<int, int> > > &list) {
	list.sort(comparePairs);
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::insertionLoop(void) {
	int				jacobsthalIndex = 2;
	size_t	currJacob;
	size_t	prevJacob = 0;
	size_t	listMax = mergeList->size();

	sortMergeList(*mergeList);
	for (bool loop = 1; loop != 0;) {
		currJacob = jacobsthalRecurrenceRelation(jacobsthalIndex);
		if (listMax < currJacob) {
			currJacob = listMax;
			loop = !loop;
			if (unpaired)
			insertUnpaired();
		}
		jacobsthalLoop(currJacob, prevJacob);
		prevJacob = currJacob;
		jacobsthalIndex++;
	}
	delete mergeList;
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::printList() {
	for (typename Container<int, std::allocator<int> >::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::printPairs() {
	for (typename Container<std::pair<int, int>, std::allocator<std::pair<int, int> > >::iterator it = mergeList->begin(); it != mergeList->end(); it++)
		std::cout << it->first << " : " << it->second << " | ";
	std::cout << std::endl;
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::fordJohnson() {
	Container<std::pair<int, int>, std::allocator<std::pair<int, int> > >	*recursionList;
	bool							recursionUnpaired;
	int								recursionUpNumber;

	if (isSorted())
		return ;
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

template class PmergeMe<std::list>;
template class PmergeMe<std::deque>;