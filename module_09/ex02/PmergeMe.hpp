#ifndef PMERGEME_HPP
# define PMERGEME_HPP

template < template <typename, typename> class Container>
class PmergeMe {
	private:
		Container<int, std::allocator<int>>
				list;
		Container<std::pair<int, int>, std::allocator<std::pair<int, int> > >
				*mergeList;
		int		upNumber;
		bool	unpaired;

		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe operator=(const PmergeMe &);

	public:
						PmergeMe(Container<int, std::allocator<int> > l1);
						~PmergeMe();
		unsigned int	sizelist();
		bool			isSorted(void);
		void			separate(void);
		void			fordJohnson();
		void			jacobstalLoop(unsigned int	prevJacob, unsigned int	currJacob);
		void			insertionLoop(void);
		void			insertPair(std::pair<int, int> pair);
		void			insertUnpaired();
};

#endif
