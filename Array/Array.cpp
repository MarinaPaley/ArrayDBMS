#include <stdexcept>
#include "Array.h"

Array::Array(const int size)
{
	if (size <= 0)
	{
		throw std::out_of_range("Размер должен быть положительный");
	}
	this->size = static_cast<size_t>(size);
	this->data = new int[this->size];
}

Array::Array(std::initializer_list<int> list)
	:size{list.size()}, data{new int[this->size]}
{
	auto i = 0;
	for (auto element : list)
	{
		this->data[i++] = element;
	}
}

Array::~Array()
{
	delete[] this->data;
}

Array::Array(const Array& other) : size{ other.size }
                                 , data{ new int[this->size] }
{
	for (auto i = 0; i < other.size; ++i)
	{
		this->data[i] = other.data[i];
	}
}

Array& Array::operator=(const Array& other)
{
	if (this != &other)
	{

	}

	return *this;
}
