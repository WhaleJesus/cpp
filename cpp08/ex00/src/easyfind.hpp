#pragma once

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Not found";
		}
};

template <typename T>
typename T::iterator easyfind(T& list, int toFind)
{
	typename T::iterator it = std::find(list.begin(), list.end(), toFind);

	if (it == list.end())
		throw NotFoundException();
	return (it);
}
