// ArrayExercises4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[10];
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < n; j++)
	{
		sum = sum + a[j];
	}
	cout << sum / n;

    return 0;
}

