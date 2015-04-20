// ProjectEuler1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	std::cout << sum;
	std::string temp;
	std::getline(std::cin, temp);

}

