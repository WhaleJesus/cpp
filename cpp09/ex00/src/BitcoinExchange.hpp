#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <exception>
#include <sstream>
#include <climits>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _data;
		void _fillData(const char* data);
		bool _checkDate(std::string d);
		double _checkPrice(std::string p);
		void _outputTimeYuzz(std::string& date, double price);
		
	public:
		BitcoinExchange(const char* data);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		const std::map<std::string, double>& getData() const;
		void programme(const char* input);
	
		class OpenFileError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Could not open file";
				}
		};
		
		class InvalidColumnFormat : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Invalid column format";
				}
		};
		
		class InvalidPriceFormat : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Invalid price format";
				}
		};
};
