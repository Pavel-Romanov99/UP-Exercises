// Array sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int arr[] = { 4, 2, 1 };
	bool result = false;

	
		for (size_t i = 0; i < sizeof(arr)/sizeof(int) - 1; i++)
		{
			int min_element = arr[i];

			if (arr[i] > arr[i + 1])
			{
				min_element = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = min_element;
			}
		}
		for (size_t k = 0; k < sizeof(arr) / sizeof(int) - 1; k++)
		{
			if (arr[k] <= arr[k + 1])
			{
				result = true;
			}
			else
			{
				result = false;
				break;
			}
		}
	
		if (result == true)
		{
			cout << "yes" << endl;
		}
		else if (result == false)
		{
			cout << "No" << endl;
		}

	//for (size_t j = 0; j < 6; j++)
	//{
	//	cout << arr[j] << " ";
	//}

    return 0;
}

