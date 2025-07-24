#include "Span.hpp"

Span::Span(unsigned int n)
	: _v(std::vector<int>()), _len(0), _max(n)
{}

Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	_len = other._len;
	_max = other._max;
	_v.erase(_v.begin(), _v.end());
	for (unsigned int i = 0; i < _len; i++)
		_v.push_back(other._v[i]);
	return *this;
}

Span::~Span(){}

void Span::addNumber(int i)
{
	if (_len == _max)
		throw MaxCountException();
	_v.push_back(i);
	_len++;
}

int Span::shortestSpan()
{
	if (_len < 2)
		throw NoSpanException();
	std::vector<int> tmp(_v);
    std::sort(tmp.begin(), tmp.end());

    int best = std::numeric_limits<int>::max();
    for (size_t i = 1; i < tmp.size(); ++i)
        best = std::min(best, tmp[i] - tmp[i - 1]);
    return best;
}

int Span::longestSpan()
{
	if (_len < 2)
		throw NoSpanException();
	int min = *std::min_element(_v.begin(), _v.end());
	int max = *std::max_element(_v.begin(), _v.end());

	return (max - min);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_v.size() + std::distance(begin, end) > _max)
		throw MaxCountException();
	_v.insert(_v.end(), begin, end);
}

const char* Span::NoSpanException::what() const throw()
{
	return "could not find span";
}
Span::NoSpanException::~NoSpanException() throw(){}

const char* Span::MaxCountException::what() const throw()
{
	return "max size reached";
}
Span::MaxCountException::~MaxCountException() throw(){}
