#include "iter.hpp"
#include <cstring>
#include <iostream>

char	toUpper(char &c) {
	c -= 32;
	return c;
}

void	toLower(char &c) {
	c += 32;
}

void	ft(int &i) {
	i = 42;
}

int	main(void) {
	char str[] = "stupidity";
	std::cout << str << std::endl;
	iter(str, std::strlen(str), toUpper);
	std::cout << str << std::endl;
	iter(str, std::strlen(str), toLower);
	std::cout << str << std::endl;

	int	arr[] = {0, 1, 2, 3, 4};
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	iter(arr, 5, ft);
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
