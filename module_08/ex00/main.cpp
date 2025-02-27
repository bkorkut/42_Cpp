#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void) {
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(8);
	vec.push_back(6);

	std::vector<int>::iterator it = ::easyfind(vec, 8);
	if (it != vec.end())
		std::cout << *it << std::endl;
	else
		std::cout << "vector end." << std::endl;
	it = ::easyfind(vec, 0);
	if (it != vec.end())
		std::cout << *it << std::endl;
	else
		std::cout << "vector end" << std::endl;
}
