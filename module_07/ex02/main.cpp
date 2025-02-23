#include "Array.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	try
	{
		std::string toBe;
		if (ac != 2)
			toBe = "default";
		else
			toBe = av[1];

		Array<char> array(toBe.size());
		for (unsigned int i = 0; i < toBe.size(); i++)
			array[i] = toBe[i];
		for (unsigned int i = 0; i < array.size(); i++)
			std::cout << array[i];
		std::cout << std::endl;

		std::cout << array[toBe.size() + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}
