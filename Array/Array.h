#pragma once
#include <initializer_list>
#include <string>

class Array final
{
private:
	size_t size;
	int* data;
public:
	explicit Array(const int size);
	Array(std::initializer_list<int> list);
	~Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
	Array(Array&& other) noexcept;
	Array& operator=(Array&& other) noexcept;
	const int operator[](size_t index) const;
	int& operator[](size_t index);
	std::string ToString() const;
};

