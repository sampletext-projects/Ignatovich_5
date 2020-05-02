#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int A[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Matr[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
	}

	cout << "Вы ввели матрицу\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << "\n";
	}

	int n;
	cout << "Введите N (столбец для обнуления): ";
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		A[i][n] = 0;
	}

	cout << "Матрица после изменения\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(3) << A[i][j] << " ";
		}
		cout << "\n";
	}

	system("pause");

	return 0;
}
