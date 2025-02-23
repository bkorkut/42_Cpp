#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

// Reintepret Cast

int	main(void) {
	Data * ptr = new Data();

	uintptr_t	num = Serializer::serialize(ptr);
	Data		*ptr2 = Serializer::deserialize(num);

	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "num: " << num << std::endl;
	std::cout << "hex: ""0x" << std::hex << num << std::endl;
	std::cout << "pt2: " << ptr2 << std::endl;
	delete ptr;
}
