#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const char* data)
{
	_fillData(data);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_data = other._data;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

const std::map<std::string, double>& BitcoinExchange::getData() const
{
	return _data;
}

void BitcoinExchange::_fillData(const char* input)
{
	std::ifstream file(input);

	if (!file.is_open())
		throw OpenFileError();
	
	std::string line;

	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw InvalidColumnFormat();

	while (std::getline(file, line))
	{
		std::string date, price;
		std::istringstream ss(line);

		std::getline(ss, date, ',');
		std::getline(ss, price, ',');

		double priceButItIsNotAString;
		std::istringstream price2(price);

		if (!(price2 >> priceButItIsNotAString))
			throw InvalidPriceFormat();
		_data[date] = priceButItIsNotAString;
	}

	file.close();
}

bool BitcoinExchange::_checkDate(std::string d)
{
	if (d.length() != 10 || d[4] != '-' || d[7] != '-')
		return false;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(d[i]))
			return false;
	}
	return true;
}

double BitcoinExchange::_checkPrice(std::string p)
{
	std::istringstream ss(p);

	double price;
	if (!(ss >> price))
	{
		std::cout << "Error: bad input => " << p << std::endl;
		return -1;
	}
	if (price < 0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return -1;
	}
	if (price > INT_MAX)
	{
		std::cout << "Error: too large a number" << std::endl;
		return -1;
	}
	return price;
}

void BitcoinExchange::_outputTimeYuzz(std::string& date, double price)
{
	std::map<std::string, double>::iterator it = _data.find(date);
	if (it != _data.end())
		std::cout << date << " => " << price << " = " << price * it->second << std::endl;
	else
	{
		std::map<std::string, double>::iterator it2 = _data.lower_bound(date);
		if (it2 != _data.begin())
			it2--;
		std::cout << date << " => " << price << " = " << price * it2->second << std::endl;
	}
}

void BitcoinExchange::programme(const char* input)
{
	std::ifstream file(input);
	if (!file.is_open())
		throw OpenFileError();

	std::string line;
	
	std::getline(file, line);
	if (line != "date | value")
		throw InvalidColumnFormat();

	std::map<std::string, double> data = getData();
	while (std::getline(file, line))
	{
		std::string date, priceButItIsAString;
		std::istringstream ss(line);

		std::getline(ss, date, '|');
		std::getline(ss, priceButItIsAString, '|');

		if (!date.empty())
			date.erase(date.length() - 1);
		if (_checkDate(date) == false)
		{
			std::cout << "Error: bad date input" << std::endl;
			continue;
		}

		if (!priceButItIsAString.empty())
			priceButItIsAString.erase(0, 1);
		double price = _checkPrice(priceButItIsAString);
		if (!(price == -1))
			_outputTimeYuzz(date, price);
	}
}
