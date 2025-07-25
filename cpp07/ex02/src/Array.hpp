#pragma once

#include <stdexcept>
#include <cstddef>

template <typename T> class Array
{
	private:
		T* _a;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		
		unsigned int size() const;
};

#include "Array.tpp"
