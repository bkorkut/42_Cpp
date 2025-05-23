#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

					MutantStack();
					MutantStack(const MutantStack &);
		MutantStack operator=(const MutantStack &);
					~MutantStack();
		iterator	begin(void);
		iterator	end(void);

};

# include "MutantStack.tpp"

#endif
