// ProjectEuler2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using std::cout;
int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int sum = 0;
	unsigned int last = 1;
	unsigned int current = 1;
	unsigned const int limit = 4000000;

	unsigned int temp = 0;

	while (current < limit)
	{
		temp = current;
		current += last;
		last = temp;
		sum += !(current & 1) ? current : 0;
	}
	cout << sum;
	_gettch();
	return 0;
}

