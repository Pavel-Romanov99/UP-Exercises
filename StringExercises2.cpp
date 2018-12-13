// StringExercises2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string.h>
#include <iostream>

using namespace std;
int main()
{
	char email[] = "rat@abv.bg";
	bool valid = true;
	int n = 0;
	int m = 0;
	
	//Намираме @
	for (int i = 0; i < strlen(email); i++)
	{
		if (email[i] == '@')
		{
			n = i;
			break;
		}
	}

	// Въртим фор до @
	for (int j = 0; j < n; j++)
	{
		if ((email[j] < 'A' || email[j] >'Z' ) && (email[j] < 'a' || email[j] > 'z'))
		{
			valid = false;
			break;
		}
	}

	//Намираме .
	for (int k = 0; k < strlen(email); k++)
	{
		if (email[k] == '.')
		{
			m = k;
			break;
		}
	}

	//Въртим фор от @ до .
	for (int l = n + 1; l < m; l++)
	{
		if ((email[l] < 'A' || email[l] >'Z') && (email[l] < 'a' || email[l] > 'z'))
		{
			valid = false;
			break;
		}
	}

	//Въртим фор от . до края
	for (int p = m + 1; p < strlen(email); p++)
	{
		if ((email[p] < 'A' || email[p] >'Z') && (email[p] < 'a' || email[p] > 'z'))
		{
			valid = false;
			break;
		}
	}
	cout << valid << endl;
}

