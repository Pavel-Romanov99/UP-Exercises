// LoopExercises4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	while (num != 0)
	{
		if (num > 0)
		{
			int temp = num % 10;
			num /= 10;
			cout << temp;
		}
		if (num < 0)
		{
			int temp = num % 10;
			num /= 10;
			cout << "- " << temp;
		}
		cout << endl;
	}
    return 0;
}

