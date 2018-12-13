// StringExercises3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = { "Tra la la moneyla" };
	string	what_we_want_to_replace = { "la" };
	string replacement;
	cin >> replacement;

	
	for (int i = 0; i < 18; i++)
	{
		int found = s.find(what_we_want_to_replace);
		if (found != string::npos) {
			s.replace(found, 2, replacement);   // 5 = length( $name )
		}
	}
	
	cout << s;
}
