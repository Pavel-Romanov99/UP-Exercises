// ArrayExercises3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10];
	int b[10];
	bool symmetric = true;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int  j = 0; j < n; j++)
	{
		if (a[j] != b[n - j - 1])
		{
			symmetric = false;
			break;
		}
	}

	cout << symmetric << endl;
    return 0;
}

