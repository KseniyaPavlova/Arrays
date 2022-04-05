//UniqueRand2
#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 4;
	const int COLS = 5;
	int arr[ROWS][COLS] = {};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique = true; //предполагаем, что случайное число будет уникальным
			do
			{
				arr[i][j] = rand() % (ROWS*COLS);
				unique = true; //предполагаем, что случайное число будет уникальным
				//но это нужно проверить:
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}