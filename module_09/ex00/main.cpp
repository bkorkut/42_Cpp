#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac == 2) {
		try
		{
			BitcoinExchange database;
			(void)av;
			std::string line = "2011-01-03 | 3";
			database.display(line);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		// std::fstream fs(av[1]);

		// if (fs.fail())
		// 	return std::cout << "Failed to open file" << std::endl, 1;
		// for (fs.good(); std::getline(fs, line);)
		return 0;
	}
	else
		return std::cout << "Wrong arguments" << std::endl, 1;
}
