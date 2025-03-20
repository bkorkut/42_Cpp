#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base * generate(void) {
	int i = rand();
	if (i % 3 == 0)
		return std::cout << "Class A generated" << std::endl, new A();
	else if (i % 3 == 1)
		return std::cout << "Class B generated" << std::endl, new B();
	else
		return std::cout << "Class C generated" << std::endl, new C();
}

void identify(Base* p) {
	std::cout << "Pointer identifier called" << std::endl;
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "p: A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "p: B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "p: C" << std::endl;
	else
		std::cout << "p: Not a known derived class of Base" << std::endl;
}

void identify(Base& p) {
	std::cout << "Reference identifier called" << std::endl;
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "p: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			dynamic_cast<B &>(p);
			std::cout << "p: B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				dynamic_cast<C &>(p);
				std::cout << "p: C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "p: Not a known derived class of Base" << std::endl;
			}
		}
	}
}

int	main() {
	srand(time(NULL));

	Base *ptr = generate();
	Base &ref = *ptr;

	identify(ptr);
	identify(ref);

	delete ptr;
}
