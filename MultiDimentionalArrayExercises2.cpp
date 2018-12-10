// MultiDimentionalArrayExercises2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int fact(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
void binom(int n)
{
	for (int k = 0; k <= n; k++)
	{
		cout << fact(n) / (fact(k)*fact(n-k)) << " ";
	}	
}

int main()
{
	int n;
	cin >> n;
	for (int j = 0; j < n; j++)
		{
			binom(j);
			cout << endl;
		}
	
}


