#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> v, std::deque<int> d)
	: _vector(v), _deque(d)
{}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	_vector = other._vector;
	_deque = other._deque;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	_vector = other._vector;
	_deque = other._deque;
	return *this;
}

PmergeMe::~PmergeMe(){}

void PmergeMe::mergeSortVector(std::vector<int> &vec, int left, int right)
{
    if (left < right)
	{
        int mid = left + (right - left) / 2;
        mergeSortVector(vec, left, mid);
        mergeSortVector(vec, mid + 1, right);
        mergeVector(vec, left, mid, right);
    }
}

void PmergeMe::mergeVector(std::vector<int> &vec, int left, int mid, int right) 
{
    std::vector<int> temp(right - left + 1);
	int i = left;      
    int j = mid + 1;   
    int k = 0;         

    // Merge the two halves into temp
    while (i <= mid && j <= right)
	{
        if (vec[i] <= vec[j])
            temp[k++] = vec[i++];
        else
            temp[k++] = vec[j++];
    }

    while (i <= mid)
        temp[k++] = vec[i++];

    while (j <= right)
        temp[k++] = vec[j++];

    for (int m = 0; m < k; ++m)
        vec[left + m] = temp[m];
}

void PmergeMe::mergeSortDeque(std::deque<int> &vec, int left, int right)
{
    if (left < right)
	{
        int mid = left + (right - left) / 2;
        mergeSortDeque(vec, left, mid);
        mergeSortDeque(vec, mid + 1, right);
        mergeDeque(vec, left, mid, right);
    }
}

void PmergeMe::mergeDeque(std::deque<int> &vec, int left, int mid, int right) 
{
    std::deque<int> temp(right - left + 1);
	int i = left;      
    int j = mid + 1;   
    int k = 0;         

    // Merge the two halves into temp
    while (i <= mid && j <= right)
	{
        if (vec[i] <= vec[j])
            temp[k++] = vec[i++];
        else
            temp[k++] = vec[j++];
    }

    while (i <= mid)
        temp[k++] = vec[i++];

    while (j <= right)
        temp[k++] = vec[j++];

    for (int m = 0; m < k; ++m)
        vec[left + m] = temp[m];
}

void PmergeMe::execute(char **av)
{
	double durationVector, durationDeque;
	clock_t start, end;

	start = clock();
	mergeSortVector(_vector, 0, _vector.size() - 1);
	end = clock();
	durationVector = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	start = clock();
	mergeSortDeque(_deque, 0, _deque.size() - 1);
	end = clock();
	durationDeque = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout << "before: ";
	for (unsigned long i = 0; i < _vector.size(); i++)
	{
		std::cout << av[i] << " ";
	}
	std::cout << std::endl << "after: ";
	for (unsigned long i = 0; i < _vector.size(); i++)
	{
		std::cout << _vector[i] << " ";
	}

	std::cout << std::fixed << std::setprecision(6);
	std::cout << std::endl << "time to process std::vector with " << _vector.size() << " elements: " << durationVector << " seconds" << std::endl;

	std::cout << "time to process std::deque with " << _deque.size() << " elements: " << durationDeque << " seconds" << std::endl;
}
