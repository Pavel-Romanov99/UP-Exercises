// LoopExercises2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = a; i < b; i++)
	{
		int sum = 0;
		for (int  j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (i == sum)
		{
			cout << sum << endl;
		}
	}
    return 0;
}

