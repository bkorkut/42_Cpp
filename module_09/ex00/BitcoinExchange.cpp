#include "BitcoinExchange.hpp"
#include <exception>
#include <algorithm>
#include <iostream>
#include <fstream>

BitcoinExchange::BitcoinExchange() {
	std::fstream	fs("data.csv");
	std::string		line;
	bool			beginFlag = 0;

	if (fs.fail())
		throw couldNotOpenFile();

	for (fs.good(); std::getline(fs, line);)
	{
		if (!beginFlag && line == "date,exchange_rate") {
			beginFlag = !beginFlag;
			continue ;
		}
		insert(line);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : database(other.database) {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other)
		database = other.database;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

const char *BitcoinExchange::couldNotOpenFile::what() const throw() {
	return "could not open file.";
}

const char *BitcoinExchange::badInput::what() const throw() {
	return invalidInput.c_str();
}

const char *BitcoinExchange::notAPositiveNumber::what() const throw() {
	return "not a positive number.";
}

const char *BitcoinExchange::tooLargeANumber::what() const throw() {
	return "too large a number.";
}

float	BitcoinExchange::getPrice(int date, std::string str) {
	std::map<int, float>::iterator it = database.lower_bound(date);
	if (it == this->database.end() || date < this->database.begin()->first)
		throw badInput(str);
	return it->second;
}

int BitcoinExchange::dateToInt(std::string date) {
	size_t pos1 = date.find_first_of('-');
	size_t pos2 = date.find_last_of('-');
	if (pos1 == std::string::npos || pos2 == std::string::npos)
		throw badInput(date);

	std::string year = date.substr(0, pos1);
	std::string month = date.substr(pos1 + 1, pos2 - pos1 - 1);
	std::string day = date.substr(pos2 + 1, date.size()- pos2 - 1);

	int y = std::atoi(year.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());
	if (y == 0 || m == 0 || d == 0)
		throw badInput(date);

	return (y * 10000 + m * 100 + d);
}

void	BitcoinExchange::insert(std::string line) {
	size_t pos = line.find(',');
	if (pos == std::string::npos)
		throw badInput(line);

	std::string date = line.substr(0, pos);
	std::string price = line.substr(pos + 1, line.size() - pos - 1);

	std::pair<int, float> pair;
	pair.first = dateToInt(date);
	pair.second = std::atof(price.c_str());

	database.insert(pair);
}

void	BitcoinExchange::display(std::string line) {
	size_t pos1 = line.find_first_of(' ');
	size_t pos2 = line.find_last_of(' ');
	if (pos1 == std::string::npos || pos2 == std::string::npos)
		throw badInput(line);

	std::string date = line.substr(0, pos1);
	std::string value = line.substr(pos2, line.size() - pos2);

	std::pair<int, float> pair;
	pair.first = dateToInt(date);
	pair.second = std::atof(value.c_str());
	if (pair.second < 0)
		throw notAPositiveNumber();
	else if (pair.second > 1000)
		throw tooLargeANumber();

	float price = getPrice(pair.first, date);

	std::cout << date << " => " << pair.second << " = " << pair.second * price << std::endl;
}