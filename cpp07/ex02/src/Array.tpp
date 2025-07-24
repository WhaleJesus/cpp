#pragma once

#include <iostream>

template <typename T>
Array<T>::Array() : _a(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n) : _a(new T[n]), _size(n){}

template <typename T>
Array<T>::Array(const Array& other) : _a(new T[other.size]), _size(other.size)
{
	for (unsigned int i = 0; i < _size; i++)
		_a[i] = other._a[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _a;
		_size = other._size;
		_a = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_a[i] = other._a[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _a;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("Index out of bounds");
	return _a[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw std::out_of_range("Index out of bounds");
	return _a[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
