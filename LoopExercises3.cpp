// LoopExercises3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int br = 0;
	
	while (num > 0)
	{
		int temp = num % 10;
		num = num / 10;
		br++;
	}
	cout << br << endl;
}

