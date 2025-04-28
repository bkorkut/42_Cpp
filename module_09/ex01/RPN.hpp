#ifndef RPN_HPP
# define RPN_HPP

#include <vector>
#include <string>
#include <exception>

class RPN {
	private:
		std::vector<int>	stack;
		class notMatch : public std::exception {
			const char *what() const throw();
		};
		class invalidInput : public std::exception {
			const char *what() const throw();
		};
	public:
			RPN();
	RPN		operator=(const RPN &);
			RPN(const RPN &);
			~RPN();
	void	processProblem(std::string input);
	void	doTheMath(char sign);

};

#endif