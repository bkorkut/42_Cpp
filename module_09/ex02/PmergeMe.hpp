#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <list>

// template <class T>
class PmergeMe {
	private:
		std::list<int> list;
		std::list<std::pair<int, int>> mergeList;
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe operator=(const PmergeMe &);

	public:
						PmergeMe(std::list<int> l1);
						~PmergeMe();
		unsigned int	sizelist();
		bool			isSorted(void);
		void			sort3(void);
		void			separate(void);
		void			fordJohnson();
};

// unsigned int	jacobsthalRecurrenceRelation(unsigned int n);
// unsigned int	jacobsthalRecurrenceRelation(unsigned int n1, unsigned int n2);

#endif
