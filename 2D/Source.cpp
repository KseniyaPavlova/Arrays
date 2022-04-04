//2D
#include<iostream>
using namespace std;

#define tab "\t"

//#define TWO
void main()
{
	setlocale(LC_ALL, "");
#ifdef TWO	
	const int ROWS = 5; //количество строк i
	const int COLS = 5; //количество столбцов (элементов строки) j
	int arr[ROWS][COLS] = {
		{1, 2, 3},
		{ 4,5,6 },
		{},
		{ 7,8,9 } };
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < ROWS; i++) //перебирает строки 
	{
		for (int j = 0; j < COLS; j++) // перебирает элементы строки
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif // TWO
	//int n, m;
	//const int ROWS = 2; //количество строк i
	//const int COLS = 5; //количество столбцов (элементов строки) j
	//int A[ROWS][COLS] = {};
	//int B[ROWS][COLS] = {};
	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++) //заполнение матрицы случайными числами
	//	{
	//		A[i][j] = rand() % 10;
	//	}
	//	for (int j = 0; j < COLS; j++) //дублирование матрицы А в матрицу В
	//	{
	//		B[i][j] = A[i][j];
	//	}
	//}


	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++) // перебирает элементы строки
	//	{
	//		cout << A[i][j] << tab;
	//	}cout << endl;
	//}
	//cout << endl;
	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++) // перебирает элементы строки
	//	{
	//		cout << B[i][j] << tab;
	//	}cout << endl;
	//}








	int n, m;
	const int ROWS = 2; //количество строк i
	const int COLS = 5; //количество столбцов (элементов строки) j
	int arr[ROWS][COLS] = {};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) //столбцы
		{
			arr[i][j] = rand() % 10;

			for (int n = 0; n < i; n++)
			{
				for (int m = 0; m < j; m++) //столбцы
				{
					if (arr[i][j] == arr[n][m])
					{
						i--;
						n--;
						break;
						
					}
				}
			}
		}
	}
	for (int i = 0; i < ROWS; i++) //перебирает строки 
	{
		for (int j = 0; j < COLS; j++) // перебирает элементы строки
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}



	/*for (int i = 0; i < n; i++) //строки
	{
		arr[i] = rand() % n;
		for (int j = 0; j <  COLS; j++) //столбцы
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
*/

}