#include "Span.hpp"

Span::Span() : limit(0) {}

Span::Span(unsigned int N) : limit(N) {}

Span::Span(const Span &other) : limit(other.limit) {}

Span	&Span::operator=(const Span &other) {
	this->limit = other.limit;
}

Span::~Span() {}

const char* Span::SpanIsFull::what() const throw() {
	return "Span limit reached.";
}

const char* Span::NoSpan::what() const throw() {
	return "There is no span.";
}

void	Span::addNumber(int num) {
	if (this->nums.size() == this->limit)
		throw SpanIsFull();
	this->nums.push_back(num);
}

unsigned int Span::shortestSpan() const {
	if (this->nums.size() <= 1)
	unsigned int span;

	return span;
}

unsigned int Span::longestSpan() const {
	unsigned int span;
	return span;
}

