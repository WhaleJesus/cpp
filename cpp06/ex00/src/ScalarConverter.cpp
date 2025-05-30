
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(std::string const& str)
{
	int len = str.length();
	
	if (isSpecial(str))
	{
		std::cout << "char: impossible" << std::endl; 
		std::cout << "int: impossible" << std::endl;
		if (str == "nan" || str == "nanf")
		{
			
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else if (str == "+inf" || str == "+inff")
		{
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else if (str == "-inf" || str == "-inff")
		{
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
	}
	else if (isChar(str, len))
	{
		char c = 0;

		if (len == 1)
			c = str[0];
		else 
			c = str[1];
		std::cout << "char: ";
		if (isprint(c))
			std::cout << "'" << c << "'";
		else 
			std::cout << "non displayable";
		std::cout << std::endl << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else if (isInt(str))
	{
		std::stringstream ss(str);
		long i;
		ss >> i;
		
		std::cout << "char: ";
		if (isprint(i))
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else 
			std::cout << "non displayable" << std::endl;
		std::cout << "int: ";
		if (i < MIN_INT || i > MAX_INT)
			std::cout << "impossible" << std::endl;
		else 
			std::cout << static_cast<int>(i) << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else if (isFloat(str))
	{
		std::stringstream ss(str);
		float f;
		ss >> f;
		bool tolerance = std::fabs(f - static_cast<int>(f)) < 0.0000000000001;
		
		std::cout << "char: ";
		if (f < 0 || f > 127)
			std::cout << "impossible" << std::endl;
		else 
		{
			if (isprint(f))
				std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
			else 
				std::cout << "non displayable" << std::endl;
		}
		std::cout << "int: ";
		if (static_cast<long>(f) < MIN_INT || static_cast<long>(f) > MAX_INT)
			std::cout << "impossible";
		else 
			std::cout << static_cast<int>(f);
		std::cout << std::endl << "float: ";
		if (f < MIN_FLOAT || f > MAX_FLOAT)
			std::cout << "impossible";
		else 
			std::cout << f << (tolerance ? ".0f" : "f");
		std::cout << std::endl << "double: " << static_cast<double>(f) << (tolerance ? ".0" : "") << std::endl;
	}
	else if (isDouble(str))
	{
		std::stringstream ss(str);
		double d;
		ss >> d;
		bool tolerance = std::fabs(d - static_cast<int>(d)) < 0.0000000000001;

		std::cout << "char: ";
		if (d < 0 || d > 127)
			std::cout << "impossible";
		else 
		{
			if (isprint(d))
				std::cout << "'" << d << "'";
			else 
				std::cout << "non displayable";
		}
		std::cout << std::endl << "int: ";
		if (static_cast<long>(d) < MIN_INT || static_cast<long>(d) > MAX_INT)
			std::cout << "impossible";
		else 
			std::cout << static_cast<int>(d);
		std::cout << std::endl << "float: ";
		if (static_cast<float>(d) < MIN_FLOAT || static_cast<float>(d) > MAX_FLOAT)
			std::cout << "impossible";
		else 
			std::cout << static_cast<float>(d) << (tolerance ? ".0f" : "f");
		std::cout << std::endl << "double: ";
		if (d < MIN_DOUBLE || d > MAX_DOUBLE)
			std::cout << "impossible";
		else 
			std::cout << d << (tolerance ? ".0" : "");
		std::cout << std::endl;
	}
}

int isSpecial(std::string const& str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return 1;
	return 0;
}

int	isChar(const std::string& str, int len)
{
	if (len == 1 && !isdigit(str[0]))
		return 1;
	if (len == 3 && str[0] == '\'' && str[2] == '\'')
		return 1;
	return 0;
}

int	isInt(std::string const& str)
{
	std::stringstream ss(str);
	int i;
	ss >> i;
	return !ss.fail() && ss.eof();
}

int isFloat(std::string const& str)
{
	std::stringstream ss(str);
	float f;
	ss >> f;
	return !ss.fail() && ss.eof();
}

int isDouble(std::string const& str)
{
	std::stringstream ss(str);
	double d;
	ss >> d;
	return !ss.fail() && ss.eof();
}
