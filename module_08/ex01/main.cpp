#include "Span.hpp"
#include <iostream>

int	main(void) {
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;

		Span sp2(10);
		for (int i = 1; i <= 10; i++)
		sp2.addNumber(i * i);
		std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp2.longestSpan() << std::endl;

		Span sp3(5);
		sp3.addRange(sp2.getVector().begin() + 2, sp2.getVector().begin() + 7);
		std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp3.longestSpan() << std::endl;

		sp3.addNumber(1000);
		std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp3.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

