#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <list>

// template <class T>
class PmergeMe {
	private:
		std::list<int>					list;
		std::list<std::pair<int, int> > mergeList;
		int								upNumber;
		bool							unpaired;

		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe operator=(const PmergeMe &);

	public:
						PmergeMe(std::list<int> l1);
						~PmergeMe();
		unsigned int	sizelist();
		bool			isSorted(void);
		//void			sort3(void);
		void			separate(void);
		void			fordJohnson();
		void			jacobstalLoop(unsigned int	prevJacob, unsigned int	currJacob);
		void			insertionLoop(void);
		void			insertPair(std::pair<int, int> pair);
		std::list<std::pair<int, int> >::iterator reorderMergeList();
};

#endif
