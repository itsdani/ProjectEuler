// ProjectEuler6.cpp : Defines the entry point for the console application.
//

// The sum of the squares of the first ten natural numbers is 385
// The square of the sum of the first ten natural numbers is 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::string;


int _tmain(int argc, _TCHAR* argv[])
{
	size_t result = 0;
	size_t max = 100;
	int squareSum = 0;
	size_t sum = 0;
	for (size_t i = 0; i <= max; i++)
	{
		sum += i;
		squareSum += i*i;
	}
	int sumSquare = sum*sum;

	result = std::abs(sumSquare - squareSum);

	cout << result;
	_gettch();
	return 0;
}

