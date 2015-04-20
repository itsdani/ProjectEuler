// ProjectEuler3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned __int64 number = 600851475143;
	unsigned long int current = 2;

	while (number>1)
	{
		if (number % current == 0)
		{
			number /= current;
		}
		else
		{
			++current;
		}
	}
	cout << current;


	_gettch();
	return 0;
}

