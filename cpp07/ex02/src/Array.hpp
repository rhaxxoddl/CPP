#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstring>
# include <exception>
# include <iostream>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array& src);
	Array& operator=(const Array& src);
	T& operator[](int  n);
	T* getArray() const;
	int size() const;
	~Array();
private:
	T* aArray;
	unsigned mSize;
};

template <typename T>
Array<T>::Array()
: aArray(0), mSize(0)
{
	aArray = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
: aArray(0), mSize(n)
{
	aArray = new T[n];
}

template <typename T>
Array<T>::Array(const Array& src)
: aArray(0), mSize(src.size())
{
	aArray = new T[mSize];
	memcpy(aArray, src.getArray(), src.size());
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
	delete[] getArray();
	aArray = new T[mSize];
	memcpy(aArray, src.getArray(), src.size());
	return *this;
}

template <typename T>
T& Array<T>::operator[](int  n)
{
	if (n < 0 || n >= size())
		throw std::exception();
	return getArray()[n];
}

template <typename T>
T* Array<T>::getArray() const { return aArray; }

template <typename T>
int Array<T>::size() const { return mSize; }

template <typename T>
Array<T>::~Array()
{
	delete[] aArray;
}


#endif