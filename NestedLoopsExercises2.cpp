// NestedLoopsExercises2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int temp = 0;
	int c;
	cin >> c;

	bool isCoprime = false;

	for (int i = a; i < b; i++)
	{
		int d = i;
		if (c > i)
		{
			
			while (c % d != 0)
			{
				temp = c % d;
				c = d;
				d = temp;
			}
			int result = d;

			if (result == 1)
			{
				isCoprime = true;
				cout << i << endl;
			}
		}
		else if (c < d)
		{
			while (c % d != 0)
			{
				temp = c % d;
				c = d;
				d = temp;
			}
			int result = d;
			if (result == 1)
			{
				isCoprime = true;
				cout << i << endl;
			}
		}
	}
	


    return 0;
}

