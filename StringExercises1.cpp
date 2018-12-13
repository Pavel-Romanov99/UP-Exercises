// StringExercises1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>

using namespace std;

void string_printing(char str[])
{

	for (int i = 1; i < strlen(str); i++)
	{
		char a[100] = "";
		strncat_s(a, str, i);
		cout << a << endl;
	
	}
	cout << str << endl;
	for (int j = 0; j < strlen(str); j++)
	{
		str[j] = ' ';
		cout << str << endl;
	}
}
int main()
{
	char str[] = { "CHRISTMAS" };
	string_printing(str);
}

