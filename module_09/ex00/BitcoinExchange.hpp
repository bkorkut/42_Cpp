#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <utility>
# include <string>
# include <map>

class BitcoinExchange {
	private:
		std::map<int, float>	database;
		class couldNotOpenFile : public std::exception {
			public:
				const char *what() const throw();
		};
		class badInput : public std::exception {
			private:
				std::string invalidInput;
			public:
				badInput(const std::string &badInput) : invalidInput("bad input => " + badInput) {}
				~badInput() throw() {}
				const char *what() const throw();
		};
		class notAPositiveNumber : public std::exception {
			public:
				const char *what() const throw();
		};
		class tooLargeANumber : public std::exception {
			public:
				const char *what() const throw();
		};

	public:
					BitcoinExchange();
					BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange	operator=(const BitcoinExchange &);
					~BitcoinExchange();
	float			getPrice(int date, std::string str);
	int				dateToInt(std::string date);
	void			insert(std::string line);
	void			display(std::string line);
};

#endif