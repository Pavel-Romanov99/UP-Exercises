// LoopExercises1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <cmath>

using namespace std;


int main()
{
	int n;
	cin >> n;
	int sum = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (n == sum)
	{
		cout << n << " is Perfect number" << endl;
	}
	else cout << n << " isn't a Perfect number" << endl;
    return 0;
}

