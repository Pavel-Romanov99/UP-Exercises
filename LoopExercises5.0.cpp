// LoopExercises5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int result1 = n;
	int br = 0;
	int temp = n * n;

	while (n > 0)
	{
		n = n / 10;
		br++;
	}

	int result = 0;
	for (int i = 0; i < br; i++)
	{
		int a = temp % 10;
		temp /= 10;
		result += a * pow(10, i);
	}

	if (result == result1)
	{
	cout << "Ammorph" << endl;
	}
	else cout << "Not ammorph" << endl;
	return 0;

}

