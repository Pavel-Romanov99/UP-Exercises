// LoopExercises7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isPrime(int n)
{
	bool isPrime = true;

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main()
{
	int num;
	cin >> num; 
	bool result = false;

	for (int i = 3; i < num; i++)
	{
		if (isPrime(i) == true)
		{
			int temp = num - i;
			if (isPrime(temp) == true)
			{
				result = true;
				break;
			}
		}
	}
	cout << result << endl;
}


