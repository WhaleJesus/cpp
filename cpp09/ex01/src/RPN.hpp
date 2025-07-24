#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <exception>

class RPN
{
	private:
		std::stack<int> _stack;
		void _execute(std::string input);
	public:
		RPN(const char* input);
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();
	
		class BadInputException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Bad input";
				}
		};
};
