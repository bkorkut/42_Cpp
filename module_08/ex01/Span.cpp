#include "Span.hpp"
#include <algorithm>

Span::Span() : limit(0) {}

Span::Span(unsigned int N) : limit(N) {}

Span::Span(const Span &other) : limit(other.limit) {}

Span	&Span::operator=(const Span &other) {
	this->limit = other.limit;
	return *this;
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

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	for (; begin != end; begin++)
		addNumber(*begin);
}

unsigned int Span::shortestSpan() const {
	if (this->nums.size() <= 1)
		throw NoSpan();

	std::vector<int> tmp = this->nums;
	std::sort(tmp.begin(), tmp.end());
	long long span = static_cast<long long>(tmp[1]) - static_cast<long long>(tmp[0]);
	for (std::vector<int>::iterator it = tmp.begin() + 1; it != tmp.end() - 1; it++) {
		span = std::min(span, static_cast<long long>(*(it + 1)) - static_cast<long long>(*it));
	}
	return span;
}

unsigned int Span::longestSpan() const {
	if (this->nums.size() <= 1)
		throw NoSpan();

	long long max = *std::max_element(this->nums.begin(), this->nums.end());
	long long min = *std::min_element(this->nums.begin(), this->nums.end());
	return max - min;
}

std::vector<int> &Span::getVector(void) {
	return nums;
}

