#include "PmergeMe.hpp"
#include <iostream>
#include <list>
#include <deque>

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

template < template <typename, typename> class Container>
PmergeMe<Container>::PmergeMe(Container<int, std::allocator<int> > list) : list(list), unpaired(false) {}

template < template <typename, typename> class Container>
PmergeMe<Container>::~PmergeMe() {}

template < template <typename, typename> class Container>
unsigned int PmergeMe<Container>::sizelist() {
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
	std::cout << "Separating list\n\nList before separation:" << std::endl;
	for (typename Container<int, std::allocator<int> >::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl << std::endl;

	mergeList = new Container<int, std::allocator<std::pair<int, int> > >();
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
	std::cout << "List and Pairs after separation:" << std::endl;
	for (typename Container<int, std::allocator<int> >::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	for (typename Container<int, std::allocator<std::pair<int, int> > >::iterator it = mergeList->begin(); it != mergeList->end(); it++)
		std::cout << it->first << " : " << it->second << ' ';
	std::cout << std::endl;
	if (unpaired)
		std::cout << "Unpaired number is " << upNumber << std::endl;
	std::cout << std::endl << "Separation complete" << std::endl << std::endl;
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::insertPair(std::pair<int, int> pair) {
	unsigned int end = 0;
	unsigned int begin = 0;
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
	for (unsigned int halfPos = __INT_MAX__; (end - begin) > 0;) {
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
	unsigned int end = list.size();
	unsigned int begin = 0;
	typename Container<int, std::allocator<int> >::iterator it = list.begin();

	if (begin == 0 && end == 0)
		return list.insert(list.begin(), upNumber), void();
	for (unsigned int halfPos = __INT_MAX__; (end - begin) > 0;) {
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
void	PmergeMe<Container>::jacobsthalLoop(unsigned int currJacob, unsigned int prevJacob) {
	typename Container<int, std::allocator<std::pair<int,int> > >::iterator it;

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
void	PmergeMe<Container>::insertionLoop(void) {
	std::cout << "Inserting merge list" << std::endl;

	int				jacobsthalIndex = 2;
	unsigned int	currJacob;
	unsigned int	prevJacob = 0;
	unsigned int	listMax = mergeList->size();

	std::cout << std::endl << "List and Pairs before insertion:" << std::endl;
	for (typename Container<int, std::allocator<int> >::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << ' ';
	if (mergeList->size() == 0)
		std::cout << "(merge list size is 0)" << std::endl;
	std::cout << std::endl;
	for (typename Container<int, std::allocator<std::pair<int, int> > >::iterator it = mergeList->begin(); it != mergeList->end(); it++)
		std::cout << it->first << " : " << it->second << ' ';
	std::cout << std::endl;

	mergeList->sort(comparePairs);
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

	std::cout << std::endl << "List and pairs after insertion:" << std::endl;
	for (typename Container<int, std::allocator<int> >::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	if (mergeList->size() == 0)
		std::cout << "(merge list size is 0)" << std::endl;
	for (typename Container<int, std::allocator<std::pair<int, int> > >::iterator it = mergeList->begin(); it != mergeList->end(); it++)
		std::cout << it->first << " : " << it->second << ' ';

	delete mergeList;
	std::cout << std::endl << "Insertion complete" << std::endl;
}

template < template <typename, typename> class Container>
void	PmergeMe<Container>::fordJohnson() {
	std::cout << "Entered Ford Johnson" << std::endl;
	Container<int, std::allocator<std::pair<int, int> > >	*recursionList;
	bool							recursionUnpaired;
	int								recursionUpNumber;

	if (isSorted())
		return std::cout << "\nIs sorted\n\nLeaving Ford Johnson" << std::endl, void();
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

	std::cout << "List size is: " << list.size() << std::endl;
	if (!isSorted())
		std::cout << "Failed the sorting!!" << std::endl;
	std::cout << "Leaving Ford Johnson" << std::endl;
}

template class PmergeMe<std::list>;
template class PmergeMe<std::deque>;