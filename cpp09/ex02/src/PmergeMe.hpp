#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;
	public:
		PmergeMe(std::vector<int> v, std::deque<int> d);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		//AAAAAAAHHHHHHHHH comment????
		void mergeSortVector(std::vector<int> &vec, int left, int right);
		void mergeVector(std::vector<int> &vec, int left, int mid, int right);
		void mergeDeque(std::deque<int> &vec, int left, int mid, int right); 
		void mergeSortDeque(std::deque<int> &vec, int left, int right);
		void execute(char **av);
};
