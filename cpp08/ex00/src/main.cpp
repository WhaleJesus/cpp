#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <iostream>

int main(int ac, char** av)
{
	int toFind = 6;
	
	if (ac > 1)
		toFind = atoi(av[1]);
	
	std::vector<int> vec;

	for (int i = 0; i < 20; i++)
	{
		vec.push_back(i);
	}

	try {
		std::cout << *easyfind(vec, toFind) << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::deque<int> deq;

	for (int i = 0; i < 20; i++)
	{
		deq.push_back(i);
	}

	try {
		std::cout << *easyfind(deq, toFind) << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
