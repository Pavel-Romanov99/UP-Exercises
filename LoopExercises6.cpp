// LoopExercises6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool isPrime = true;

	for (int  i = 2; i < n/2 ; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
		}
	}
	cout << isPrime << endl;

    return 0;
}

