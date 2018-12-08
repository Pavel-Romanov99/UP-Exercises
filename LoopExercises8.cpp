// LoopExercises8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int copy_of_n = n;
	int reversed = 0;
	int i = 0;

	while (n > 0)
	{
		int temp = n % 10;
		n /= 10;
		reversed += temp * pow(10, i);
		i++;
	}

	if (copy_of_n == reversed)
	{
		cout << "True" << endl;
	}
	else cout << "false";

    return 0;
}

