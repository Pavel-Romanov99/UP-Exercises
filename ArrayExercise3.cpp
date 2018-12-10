// ArrayExercise3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int array[] = { 1,2,3,4,5,6,2,1,3,2,3,4,5,6,7,8,9,10 };
	int current_counter = 0;
	int longest_counter = 0;

	for (int i = 0; i < sizeof(array)/sizeof(*array); i++)
	{
		current_counter = 1;
		for (int j = i + 1; j < sizeof(array) / sizeof(*array) - 1; j++)
		{
			if (array[i] < array[j])
			{
				current_counter++;
			}
			else break;
		}
		if (current_counter > longest_counter)
		{
			longest_counter = current_counter;
		}
	}
	cout << longest_counter - 1<< endl;
}

