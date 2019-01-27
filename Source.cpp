#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = {

		{ 1,2,3,4 },
		{ 4,6,7,44 },
		{ 9,10,13,14 },
		{ 12,22,23,42 },
	};
	int l = 0;
	bool check_equal = true;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = i; k < 4; k++)
			{
				for ( l = 0; l < 4; l++)
				{
					if (j != l)
					{
						if (arr[i][j] == arr[k][l])
						{
							check_equal = false;
							break;
						}
					}
				}
			}
			
		}
	}
	cout << check_equal << endl;
}