// ProjectEuler5.cpp : Defines the entry point for the console application.

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::string;

int _tmain(int argc, _TCHAR* argv[])
{
	// 2, 3, 5, 7, 11, 13, 17, 19
	size_t max = 20;
	size_t result = 1;

	for (size_t current = 2; current <= max; current++)
	{
		if (result % current != 0)
		{
			size_t counter = 1;
			while (std::pow(current, counter) <= max)
			{
				++counter;
			}
			result *= std::pow(current, (counter - 1));
		}
	}

	cout << result;
	_gettch();
	return 0;
}

