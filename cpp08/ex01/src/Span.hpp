#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
	private:
		std::vector<int> _v;
		unsigned int _len;
		unsigned int _max;
	public:
		Span(unsigned int n);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int i);
		int	shortestSpan();
		int longestSpan();
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~NoSpanException() throw();
		};
		class MaxCountException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~MaxCountException() throw();
		};
};
