// ArraysExercises4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char jewels[] = { 'a','A' };
	char rocks[] = { 'a', 'A' , 'A' , 'b','b' ,'b' ,'b', 'a' , 'A'};
	int number_jewels = 0;

	for (int i = 0; i < sizeof(jewels) / sizeof(*jewels) ; i++)
	{
		for (int j = 0; j < sizeof(rocks) / sizeof(*rocks); j++)
		{
			if (jewels[i] == rocks[j])
			{
				number_jewels++;
			}
		}
	}
	cout << number_jewels << endl;
}
