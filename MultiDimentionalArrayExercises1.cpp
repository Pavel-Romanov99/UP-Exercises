// MultiDimentionalArrayExercises1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10][10];
	int x = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			x = i + i;
			if (i == j)
			{
				a[i][i] = 0;

			}
			if (j > i)
			{
				a[i][j] = j - i;
			}
			if (j < i)
			{
				a[i][j] = i - j ;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

