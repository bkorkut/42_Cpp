#ifndef RPN_HPP
# define RPN_HPP

#include <vector>
#include <string>

class RPN {
	private:
		std::vector<int>	stack;
		std::vector<char>	signs;

	public:
			RPN();
	RPN		operator=(const RPN &);
			RPN(const RPN &);
			~RPN();
	void	setStacks(std::string input);
};

#endif