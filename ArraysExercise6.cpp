// ArraysExercise6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string string1= "what are you talking ";
	string substring1 = "about";

	if (string1.find(substring1) != string::npos)
	{
		cout << substring1 << endl;
	}
	else cout << "-1" << endl;
}

