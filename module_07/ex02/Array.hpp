#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
	private:
		unsigned int	_size;
		T				*_arr;

	public:
						Array();
						Array(unsigned int n);
						Array(const Array &other);
		T				&operator[](unsigned int idx);
		unsigned int	size() const;
};

# include "Array.tpp"

#endif
