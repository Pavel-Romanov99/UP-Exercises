// ArraysExercise5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char array[] = { "this is a test kidding"};
	int number_characters = 0;
	int number_words = 0;
	for (int i = 0; i < sizeof(array) / sizeof(*array); i++)
	{
		number_characters++;
		if (array[i] == ' ')
		{
			number_words++;
		}
	}
	cout << "Number of characters is " << number_characters - 1 << " Number of words is  " << number_words + 1 << endl;
}
