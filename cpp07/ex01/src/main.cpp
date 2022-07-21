#include "iter.hpp"
#include <iostream>

void increment(int i)
{
	i++;
	std::cout << "+: " << i << std::endl;
}
int decrement(int i)
{
	i--;
	std::cout << "-: " << i << std::endl;
	return i;
}

int main(void)
{
	int intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(intArray, 10, increment);
	iter(intArray, 10, decrement);
	return 0;
}