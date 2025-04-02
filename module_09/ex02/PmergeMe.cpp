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

PmergeMe::PmergeMe(std::list<int> l1) : l1(l1) {}

PmergeMe::~PmergeMe() {}

unsigned int PmergeMe::sizel1() {
	return l1.size();
}

unsigned int PmergeMe::sizel2() {
	return l2.size();
}

void PmergeMe::printl1() {
	for (std::list<int>::iterator i = l1.begin(); i != l1.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

void PmergeMe::printl2() {
	for (std::list<int>::iterator i = l2.begin(); i != l2.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
}

bool	PmergeMe::isSorted(void) {
	for (std::list<int>::iterator i = l1.begin(); i != l1.end(); i++) {
		if (++i == l1.end())
			break ;
		else if (*i < *(--i))
			return false;
	}
	return true;
}

void	PmergeMe::sort3(void) {
	this->printl1();
	this->printl2();
	if (this->isSorted())
		return ;
	else if (l1.size() < 3) {
		int tmp = *l1.begin();
		*l1.begin() = *(++l1.begin());
		*(++l1.begin()) = tmp;
	}
	else if ((*l1.begin() < *(++l1.begin()) && *l1.begin() < *(++(++l1.begin())))
		|| (*l1.begin() > *(++l1.begin()) && *l1.begin() > *(++(++l1.begin())))) {
		l2.push_back(*l1.begin());
		l1.pop_front();
		this->sort3();
		*l1.begin() < *l2.begin() ? l1.push_back(*l2.begin()) : l1.push_front(*l2.begin());
		l2.pop_back();
	}
	else {
		l2.push_back(*(--l1.end()));
		l1.pop_back();
		this->sort3();
		*l1.begin() < *l2.begin() ? l1.push_back(*l2.begin()) : l1.push_front(*l2.begin());
		l2.pop_back();
	}
}

unsigned int	PmergeMe::separate(void) {
	unsigned int i = 0;
	for (std::list<int>::iterator idx = l1.begin(); idx != l1.end();) {
		int	first = *(idx++);
		if (idx == l1.end()) {
			l2.push_back(*(--idx));
			idx = l1.erase(idx);
		}
		else if (first > *idx) {
			l2.push_back(*idx);
			idx = l1.erase(idx);
		}
		else {
			l2.push_back(*(--idx));
			idx = l1.erase(idx);
			idx++;
		}
		i++;
	}
	return i;
}

void PmergeMe::insert(unsigned int n) { (void)n; }

void	fordJohnson(PmergeMe &program) {
	program.printl1();
	program.printl2();
	if (program.isSorted())
		return ;
	else if (program.sizel1() <= 3) {
		program.sort3();
	}
	else {
		unsigned int i = program.separate();
		fordJohnson(program);
		program.insert(i);
	}
}
