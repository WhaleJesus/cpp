#include "RPN.hpp"

RPN::RPN(const char* input)
{
	std::string str = input;
	_execute(str);
}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		_stack = other._stack;
	return *this;
}

RPN::~RPN()
{}

void RPN::_execute(std::string input)
{
	std::string line;
	int n;

	std::istringstream ss(input);
	while (std::getline(ss, line, ' '))
	{
		if (line.size() > 1)
			throw BadInputException();
		std::istringstream intstrem(line);
		if (intstrem >> n)
		{
			_stack.push(n);
			//std::cout << "original push " << n << std::endl;
		}
		else {
			//std::cout << "operand push ";
			int n3 = _stack.top();
			_stack.pop();
			int n2 = _stack.top();
			_stack.pop();
			//std::cout << n2 << " ";
			if (line == "+")
			{
				//std::cout << "+ ";
				n = n2 + n3;
			}
			else if (line == "-")
			{
				//std::cout << "- ";
				n = n2 - n3;
			}
			else if (line == "/")
			{
				//std::cout << "/ ";
				n = n2 / n3;
			}
			else if (line == "*")
			{
				//std::cout << "* ";
				n = n2 * n3;
			}
			else {
				throw BadInputException();
			}
			//std::cout << n3 << " = " << n << std::endl;
			_stack.push(n);
		}
	}
	std::cout << "Result: " << _stack.top() << std::endl;
}
