#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main(void) {
	MutantStack<int>	mstack;
	std::list<int>		list;

	mstack.push(5);
	list.push_back(5);
	mstack.push(17);
	list.push_back(17);

	std::cout << mstack.top() << std::endl;
	std::cout << list.back() << std::endl;

	mstack.pop();
	list.pop_back();

	std::cout << mstack.size() << std::endl;
	std::cout << list.size() << std::endl;

	mstack.push(3);
	list.push_back(3);
	mstack.push(5);
	list.push_back(5);
	mstack.push(737);
	list.push_back(737);

	mstack.push(0);
	list.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	std::list<int>::iterator lt = list.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator lte = list.end();

	++it;
	++lt;
	--it;
	--lt;

	std::cout << "MutantStack: " << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "List: " << std::endl;
	while (lt != lte) {
		std::cout << *lt << std::endl;
		++lt;
	}
	std::stack<int, std::list<int> > l(list);

	return 0;
}
