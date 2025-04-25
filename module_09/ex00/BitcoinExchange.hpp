#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <utility>
# include <string>
# include <map>

class BitcoinExchange {
	private:
		std::map<int, float>	database;
		class failedToOpenFile : public std::exception {
			const char *what() const throw();
		};

	public:
					BitcoinExchange();
					BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange	operator=(const BitcoinExchange &);
					~BitcoinExchange();
	float			getPrice(int date);
	int				dateToInt(std::string date);
	void			insert(std::string line);
	void			display(std::string line);
};

#endif