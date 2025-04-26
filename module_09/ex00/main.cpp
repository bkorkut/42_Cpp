#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac == 2) {
		BitcoinExchange database;
		std::fstream	fs(av[1]);
		std::string		line;
		bool			beginFlag = 0;
		
		if (fs.fail())
			return std::cout << "Error: could not open file." << std::endl, 1;
		for (fs.good(); std::getline(fs, line);)
		{
			if (!beginFlag && line == "date | value") {
				beginFlag = !beginFlag;
				continue ;
			}
			try
			{
				database.display(line);
			}
			catch(const std::exception& e)
			{
				std::cerr << "Error: " << e.what() << std::endl;
			}
		}
		return 0;
	}
	else
		return std::cout << "Error: wrong arguments." << std::endl, 1;
}
