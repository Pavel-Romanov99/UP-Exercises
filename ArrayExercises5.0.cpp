// ArrayExercises5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int array[] = {
		1,2,2,1,3,1,1,1,11,2,2,2,2,2,2
	};
	int br = 1;
	int best_br = 0;
	int number = 0;
	int best_number = 0;

	for (int i = 0; i < sizeof(array)/sizeof(*array); i++)
	{
		int number = array[i];
		for (int j = i + 1; j < sizeof(array) / sizeof(*array); j++)
		{
			if (array[i] == array[j])
			{
				br++;
			}
		}	
		if (best_br < br)
		{
			best_br = br;
			best_number = number;
		}
		br = 1;
	}
	cout << best_br << " " << best_number <<   endl;
	return 0;
}

