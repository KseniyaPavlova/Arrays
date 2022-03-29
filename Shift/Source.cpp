//Shift
#include<iostream>
using namespace std;

//#define SDVIG_VLEVO
#define SDVIG_VPRAVO
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int x;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

#ifdef SDVIG_VLEVO
	//Циклический сдвиг массива:
	int number_of_shifts;  //количество сдвигов
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}

	//Вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // SDVIG_VLEVO


#ifdef SDVIG_VPRAVO
	//Циклический сдвиг массива:
	int number_of_shifts;  //количество сдвигов
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	//Вывод сдвинутого массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // SDVIG_VPRAVO




	
}