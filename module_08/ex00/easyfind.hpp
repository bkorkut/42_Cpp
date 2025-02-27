#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &cont, int value) {
	return find(cont.begin(), cont.end(), value);
}

#endif
