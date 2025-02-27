#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span {
	private:
		unsigned int		limit;
		std::vector<int>	nums;
		class SpanIsFull : public std::exception {
			const char* what() const throw();
		};
		class NoSpan : public std::exception {
			const char* what() const throw();
		};
	public:
						Span();
						Span(unsigned int N);
						Span(const Span &other);
		Span			&operator=(const Span &other);
						~Span();

		void			addNumber(int num);
		void			addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		std::vector<int>&getVector(void);
};

#endif
