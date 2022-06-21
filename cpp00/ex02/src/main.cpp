#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
	time_t	t;
	tm	*timeInfo;

	time(&t);
	timeInfo = localtime(&t);
	std::cout << "[" << timeInfo->tm_year + 1900
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_hour
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_min
				<< std::setw(2) << std::setfill('0') << timeInfo->tm_sec << "]" << std::endl;
}
