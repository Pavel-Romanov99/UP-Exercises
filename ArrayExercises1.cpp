// ArrayExercises1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;

	int array1[100];

	for (int i = 0; i < n; i++)
	{
		cin >> array1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << array1[i] << " ";
	}
    return 0;
}

