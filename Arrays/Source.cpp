//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10; //количество элементов массива (размер массива)  
	int arr[n] = {};
	int sum = 0, a = 0;
	double x = 0;
	/*arr[2] = 123;*/

	int minRand;
	int maxRand;
	cout << "Введите минимально возможное случайное число: "; cin >> minRand;
	cout << "Введите максимально возможное случайное число: "; cin >> maxRand;

	//cout << "Введите элементы массива (" << n << " шт):";
	for (int i = 0; i < n; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % (maxRand - minRand)+ minRand;
	}
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод суммы элементов массива
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;

	//Вывод средней арифметической
	cout << "Среднее арифметическое массива: " << (double)x / n << endl;

	//Вывод минимального значения
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;

	//Вывод максимального значения
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	cout << "Максимальное значение в массиве: " << max << endl;

	//Поиск минимального и максимального значения:
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;
}
