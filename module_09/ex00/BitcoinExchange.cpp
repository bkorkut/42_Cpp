#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &) {

}

BitcoinExchange	BitcoinExchange::operator=(const BitcoinExchange &) {}
BitcoinExchange::~BitcoinExchange() {}

int	BitcoinExchange::getClosestDate(int date) {

}

int	BitcoinExchange::getValue(int date) {
	std::map<int, int>::iterator it = this->database.find(date);
	if (it != this->database.end())
		return it->second;
	else
		
}


void	BitcoinExchange::displayResult(std::pair<int, int>) {
	
}