#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << "please provide args" <<std::endl;
		return 1;
	}

	std::vector<int> vec;
	std::deque<int> deq;
	
	av++;
	for (int i = 0; i < ac - 1; i++)
	{
		std::string arg = av[i];
		for (size_t k = 0; k < arg.length(); k++)
		{
			if (!isdigit(arg[k]))
			{
				std::cout << "please provide only positive numbers" << std::endl;
				return 1;
			}
		}

		std::istringstream ss(arg);
		int num;
		ss >> num;

		if (ss.fail() || !ss.eof())
		{
			std::cout << "invalid input" << std::endl;
			return 1;
		}
		
		deq.push_back(num);
		vec.push_back(num);
	}
	
	PmergeMe m(vec, deq);
	m.execute(av);
}
