#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename U>
void iter(T* arr, unsigned int length, U (*fn)(T))
{
	for (unsigned int i = 0; i < length; i++)
		fn(arr[i]);
}

#endif