// ArrayExercises2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int array[100];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	int max_element = array[0];

	for (int j = 0; j < n; j++)
	{
		if (max_element < array[j])
		{
			max_element = array[j];
		}
	}
	cout << max_element << endl;

	return 0;
}

