#include "Array.hpp"
#include <exception>

template <class T>
Array<T>::Array() : _size(0), _arr(new T[_size]) {}

template <class T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[_size]) {}

template <class T>
Array<T>::Array(const Array<T> &other) : _size(other._size), _arr(new T[_size]) {
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
}

template <class T>
Array<T>	Array<T>::operator=(const Array<T> &other) {
	delete[] this->_arr;
	this->_size = other._size;
	this->_arr = new T[_size];
	for (unsigned int i = 0; i < this->_size; i++)
		_arr[i] = other._arr[i];
	return *this;
}

template <class T>
Array<T>::~Array() {
	delete[] this->_arr;
}

template <class T>
T	&Array<T>::operator[](unsigned int idx) {
	if (idx > _size)
		throw std::exception();
	return _arr[idx];
}

template <class T>
unsigned int	Array<T>::size() const { return _size; }
