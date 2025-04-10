#include "Array.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	try
	{
		std::string input;
		input = ac == 2 ? av[1] : "default";

		Array<char> array(input.size());
		for (unsigned int i = 0; i < input.size(); i++)
			array[i] = input[i];
		std::cout << array << std::endl;
		
		Array<char> array2(array);
		std::cout << array2 << std::endl;
		
		for (unsigned int i = 0; i < array.size(); i++)
			array2[i] = std::toupper(array2[i]);
		std::cout << array << std::endl;
		std::cout << array2 << std::endl;

		std::cout << array[input.size() + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}
