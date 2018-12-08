// NestedLoopsExercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int temp = 0;

	while (a % b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	int result = b;

	if (result == 1)
	{
		cout << "Coprime integers" << endl;
	}
	else if (result != 1)
	{
		cout << "Not Coprime integers" << endl;
	}
    return 0;
}

