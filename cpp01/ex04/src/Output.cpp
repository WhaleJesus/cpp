#include <string>
#include "Output.hpp"

Output::Output()
{
	_str = "";
	_index = 0;
}

void Output::setStr(std::string s)
{
	_str = s;
}

void Output::setIndex(int i)
{
	_index = i;
}

std::string Output::getStr()
{
	return _str;
}

int	Output::getIndex()
{
	return _index;
}
