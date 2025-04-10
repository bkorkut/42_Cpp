#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T				*_arr;
		class	OutOfReachException : public std::exception {
			const char *what() const throw();
		};
	public:
						Array();
						Array(unsigned int n);
						Array(const Array &other);
		Array			operator=(const Array &other);
						~Array();
		T				&operator[](unsigned int idx);
		const T			&operator[](unsigned int idx) const;
		unsigned int	size() const;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &obj);

# include "Array.tpp"

#endif
