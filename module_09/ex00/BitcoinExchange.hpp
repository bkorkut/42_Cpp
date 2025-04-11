#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <utility>
# include <map>

class BitcoinExchange {
	private:
		std::map<int, int> database;

	public:
					BitcoinExchange();
					BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange	operator=(const BitcoinExchange &);
					~BitcoinExchange();
	int				getClosestDate(int date);
	int				getValue(int date);
};

#endif