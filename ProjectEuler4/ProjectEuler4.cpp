// ProjectEuler4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using std::cout;
using std::string;

bool isPalindrom(int number)
{
	string candidate = std::to_string(number);
	std::string::iterator fromBegin = candidate.begin();
	std::string::iterator fromEnd = candidate.end();
	fromEnd--;

	bool isPalindrom = true;
	while (fromBegin <= fromEnd)
	{
		if (*fromBegin != *fromEnd)
		{
			isPalindrom = false;
			break;
		}
		fromBegin++;
		fromEnd--;
	}

	return isPalindrom;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int largest = 1001;
	for (int i = 999; i > 99; --i)
	{
		for (int j = 999; j > 99; --j)
		{
			if (i*j > largest && isPalindrom(i*j))
			{
				largest = i*j;
			}
		}
	}
	cout << largest;
	_gettch();
	return 0;
}

