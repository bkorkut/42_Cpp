#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <class T>
class T::iterator easyfind(T &cont, int value) {
	return find(cont.begin(), cont.end(), value);
}

#endif
