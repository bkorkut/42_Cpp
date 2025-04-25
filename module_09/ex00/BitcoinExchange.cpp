#include "BitcoinExchange.hpp"
#include <exception>
#include <algorithm>
#include <iostream>
#include <fstream>

BitcoinExchange::BitcoinExchange() {
	std::fstream	fs("data.csv");
	std::string		line;
	
	if (fs.fail())
		throw failedToOpenFile();
	for (fs.good(); std::getline(fs, line);)
		insert(line);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &) {}

BitcoinExchange	BitcoinExchange::operator=(const BitcoinExchange &) { return *this; }

BitcoinExchange::~BitcoinExchange() {}

const char *BitcoinExchange::failedToOpenFile::what() const throw() {
	return "Failed to open File";
}

float	BitcoinExchange::getPrice(int date) {
	std::map<int, float>::iterator it = database.lower_bound(date);
	if (it != this->database.end())
	{
		if (date < this->database.begin()->first)
		throw std::exception();
		return it->second;
	}
	else
	return (--it)->second;
}

int BitcoinExchange::dateToInt(std::string date) {
	size_t pos1 = date.find_first_of('-');
	size_t pos2 = date.find_last_of('-');
	if (pos1 == std::string::npos || pos2 == std::string::npos)
		throw std::exception();
	
	std::string year = date.substr(0, pos1);
	std::string month = date.substr(pos1 + 1, pos2 - pos1 - 1);
	std::string day = date.substr(pos2 + 1, date.size()- pos2 - 1);
	
	int y = std::atoi(year.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());
	if (y == 0 || m == 0 || d == 0)
		throw std::exception();
	
	return (y * 10000 + m * 100 + d);
}

void	BitcoinExchange::insert(std::string line) {
	size_t pos = line.find(',');
	if (pos == std::string::npos)
		throw std::exception();
	
	std::string date = line.substr(0, pos);
	std::string price = line.substr(pos + 1, line.size() - pos - 1);
	
	std::pair<int, float> pair;
	pair.first = dateToInt(date);
	pair.second = std::atof(price.c_str());
	
	database.insert(pair);
}

void	BitcoinExchange::display(std::string line) {
	try {
		size_t pos1 = line.find_first_of(' ');
		size_t pos2 = line.find_last_of(' ');
		if (pos1 == std::string::npos || pos2 == std::string::npos)
		throw std::exception();
		
		std::string date = line.substr(0, pos1);
		std::string value = line.substr(pos2, line.size() - pos2);
		
		std::pair<int, float> pair;
		pair.first = dateToInt(date);
		pair.second = std::atof(value.c_str());
		
		float price = getPrice(pair.first);
		std::cout << date << " => " << pair.second << " = " << pair.second * price << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}