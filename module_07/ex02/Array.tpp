#include "Array.hpp"
#include <exception>

template <typename T>
Array<T>::Array() : _size(0), _arr(new T[_size]) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[_size]) {}

template <typename T>
Array<T>::Array(const Array<T> &other) : _size(other._size), _arr(new T[_size]) {
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
}

template <typename T>
Array<T>	Array<T>::operator=(const Array<T> &other) {
	delete[] this->_arr;
	this->_size = other._size;
	this->_arr = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		_arr[i] = other._arr[i];
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_arr;
}

template <typename T>
const char	*Array<T>::OutOfReachException::what() const throw() {
	return "Index out of reach";
}

template <typename T>
unsigned int	Array<T>::size() const { return _size; }

template <typename T>
T	&Array<T>::operator[](unsigned int idx) {
	if (idx > _size)
		throw OutOfReachException();
	return _arr[idx];
}

template <typename T>
const T	&Array<T>::operator[](unsigned int idx) const {
	if (idx > _size)
		throw OutOfReachException();
	return _arr[idx];
}

template <typename T>
std::ostream	&operator<<(std::ostream &os, const Array<T> &obj) {
	for (unsigned int i = 0; i < obj.size(); i++)
		os << obj[i];
	return os;
}