//Numerics
#include<iostream>
using namespace std;

//#define BINARY
//#define OCTAL
#define HEXADECIMAL

void main()
{
	setlocale(LC_ALL, "");
	int decimal;  //���������� �����, �������� � ����������
	//const int SIZE = 32; //����������� ��������� ����������� ���������� �����

#ifdef BINARY
	const int SIZE = 32;
	bool bin[SIZE] = {}; //���� ������ ����� ������� ������� ��������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	//int n = 0; //����������� ����������� �����
	int i = 0;
	for (; decimal; i++)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		//n++;
	}

	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif // BINARY

#ifdef OCTAL
	const int SIZE = 11;
	int oct[SIZE] = {}; //���� ������ ����� ������� ������� ������������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	for (; decimal; i++)
	{
		oct[i] = decimal % 8;
		decimal /= 8;
	}
	for (i--; i >= 0; i--)
	{
		cout << oct[i];
	}
	cout << endl;
#endif // OCTAL


#ifdef HEXADECIMAL
	const int SIZE = 8;
	int hex[SIZE] = {}; //���� ������ ����� ������� ������� ������������� �����
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	for (i--; i >= 0; i--)
	{
		if (hex[i] == 10)cout << "A";
		else if (hex[i] == 11)cout << "B";
		else if (hex[i] == 12)cout << "C";
		else if (hex[i] == 13)cout << "D";
		else if (hex[i] == 14)cout << "E";
		else if (hex[i] == 15)cout << "F";
		else cout << hex[i];
	}
	cout << endl;
#endif // HEXADECIMAL


}