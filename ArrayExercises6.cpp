// ArrayExercises6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10], b[10];
	bool the_same = true;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < n; j++)
	{
		cin >> b[j];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			the_same = false;
			break;
		}
	}

	cout << the_same << endl;
    return 0;
}

