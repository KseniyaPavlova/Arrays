#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n----------------------------------\n"
//#define DET


void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	//const int n = 3;
	int A[n][n] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
#ifdef DET
	const int m = 3;
	//int B[m][n] = {};
	//int x = 0, k = 1, k1 = 1, k2 = 1, y = 0;

	//��������� ������� 
	//for (int i = 0; i < m; i++)
	//{
	//	for (int j = 0; j < n + n - 1; j++) // ����������� ���������� ��������
	//	{
	//		if (j < n) //���������� ������� ���������� �������
	//		{
	//			A[i][j] = rand() % 20;
	//			cout << A[i][j] << tab;
	//		}
	//		else if (j >= n) //��������� ������� (������������ ������ �������� � �����)
	//		{
	//			if (y == n - 1) { y = 0; x++; }
	//			else if (y > n - 2) x++;
	//			A[i][j] = A[x][y];
	//			y++;
	//			cout << A[i][j] << tab;
	//		}
	//	}	cout << endl;
	//}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) A[i][j] = rand() % 10;
	}
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}*/

	int B[n][n * 2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) B[i][j] = B[i][j + n] = A[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2 - 1; j++) cout << B[i][j] << "\t";
		cout << endl;
	}
	cout << delimiter << endl;

	int sum_glavnaya_diag = 0;

	for (int i = 0; i < n; i++)
	{
		int ymnojenie = 1;
		for (int j = 0; j < n; j++)
		{
			//if (B[j][j + i] == 0) B[j][j + i] = 1;
			ymnojenie *= B[j][j + i];
		}
		sum_glavnaya_diag += ymnojenie;
	}
	cout << "����� ������� ��������� = " << sum_glavnaya_diag << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int ymnojenie = 1;
		for (int j = 0; j < n; j++)
		{
			//if (B[n - j - 1][j + i]==0) B[n - j - 1][j + i] = 1;
			ymnojenie *= B[n - j - 1][j + i];
		}
		sum += ymnojenie;
	}
	cout << "����� ��������������� ��������� = " << sum << endl;
	int det = sum_glavnaya_diag - sum;
	cout << "����������� ������� ������� ������� " << det << endl;
#endif // DET
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		A[i][j] = rand() % 10;
	//	}
	//}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}

	//������� ����������� �������:
	int B[n][n * 2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	//��������� ������������

	//��������� ������� ���������:
	int main_diag = 0;
	for (int i = 0; i < n; i++)
	{
		int product = 1; //������������ ��������� ������� ���������
		for (int j = 0; j < n; j++)
		{
			product *= B[j][i + j];
		}
		main_diag += product;
	}
	cout << "������� ���������: " << main_diag << endl;

	//��������� ��������������� ���������:
	int aux_diag = 0; //aux-Auxilliary (���������������)
	for (int i = 0; i < n; i++)
	{
		int product = 1;
		for (int j = 0; j < n; j++)
		{
			product *= B[n - 1 - j][i + j];
		}
		aux_diag += product;
	}
	cout << "��������������� ���������: " << aux_diag << endl;
	cout << "������������ �������: " << main_diag - aux_diag << endl;
}






