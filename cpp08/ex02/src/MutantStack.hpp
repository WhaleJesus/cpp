#pragma once

#include <deque>
#include <stack>

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(const MutantStack &other)
		{
			*this = other;
		}
        MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				this->c = other.c;
			return *this;
		}

		typedef typename container::iterator iterator;
		iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};
