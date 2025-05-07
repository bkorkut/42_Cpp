#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <memory>

template < template <typename, typename> class Container>
class PmergeMe {
	private:
		Container<int, std::allocator<int> > list;
		Container<std::pair<int, int>, std::allocator<std::pair<int, int> > > *mergeList;
		int		upNumber;
		bool	unpaired;

	public:
				PmergeMe();
				PmergeMe(const PmergeMe &other);
		PmergeMe<Container> &operator=(const PmergeMe<Container> &other);
				PmergeMe(Container<int, std::allocator<int> > list);
				~PmergeMe();
		bool	isSorted(void);
		void	separate(void);
		void	insertPair(std::pair<int, int> pair);
		void	insertUnpaired();
		void	jacobsthalLoop(std::size_t prevJacob, std::size_t currJacob);
		void	insertionLoop(void);
		void	fordJohnson();
		std::size_t	size();
		void	printList();
		void	printPairs();
};

#endif
