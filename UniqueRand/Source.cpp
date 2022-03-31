#include<iostream>
using namespace std;

//#define UNIQUE_1
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	bool unique;
#ifdef UNIQUE_1
	for (int i = 0; i < n; i++)
	{
		do
		{
			arr[i] = rand() % n;
			unique = true; //предполагаем, что сгенерированное случайное число уникально, но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; //прерывает текующую итерацию и все последующие
				}
			}
		} while (!unique);

	}
#endif // UNIQUE_1

	
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = i - 1; j >= 0; j--)
	//	{
	//		//for (int j = i - 1; j >= 0; j--)
	//		{
	//			if (arr[i] == arr[j]) arr[i] = rand() % n;
	//		}
	//	}
	//}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
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


}