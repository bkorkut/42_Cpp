#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <list>

// template <class T>
class PmergeMe {
	private:
		std::list<int> l1;
		std::list<int> l2;
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe operator=(const PmergeMe &);

	public:
						PmergeMe(std::list<int> l1);
						~PmergeMe();
		unsigned int	sizel1();
		unsigned int	sizel2();
		void			printl1();
		void			printl2();
		bool			isSorted(void);
		void			sort3(void);
		unsigned int	separate(void);
		void			insert(unsigned int n);
};

void	fordJohnson(PmergeMe &program);
// unsigned int	jacobsthalRecurrenceRelation(unsigned int n);
// unsigned int	jacobsthalRecurrenceRelation(unsigned int n1, unsigned int n2);

#endif
