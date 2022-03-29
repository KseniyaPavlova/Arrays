#include<iostream>
using namespace std;

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	cout << a << tab << b << endl;
	int buffer = a;
	a = b;
	b = buffer;
	cout << a << tab << b << endl;

	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	//Вывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сортировка массива
	for (int i = 0; i < n; i++) // выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++) // перебирает оставшиеся элементы 
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}


	//Вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << tab;
	}
	cout << endl;
}