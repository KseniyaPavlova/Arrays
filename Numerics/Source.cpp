//Numerics
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;  //десятичное число, вводимое с клавиатуры
	const int SIZE = 32; //максимально возможная разрядность введенного числа
	bool bin[SIZE] = {}; //этот массив будет хранить разряды двоичного числа
	cout << "Введите десятичное число: "; cin >> decimal;
	//int n = 0; //Фактическая разрядность числа
	int i = 0;
	for (; decimal; i++)
	{
		bin[i]=decimal % 2;
		decimal /= 2;
		//n++;
	}

	for (i-- ; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}