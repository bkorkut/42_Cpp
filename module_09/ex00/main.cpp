#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int ac, char **av) {
	if (ac == 2) {
		BitcoinExchange dates;
		
		std::pair<int, int> value;
		int exchangeRate = dates.closestDate(date);
		std::cout << value.first() << " => " << value.second() << " = " << value.second() * exchangeRate << std::endl;
	}
	else
		std::cout << "Wrong arguments" << std::endl;
}
