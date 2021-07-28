#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 5;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum = sum + arr[i][j];
		}
	}
	cout << "Сумма арифметических чисел: " << sum << endl;
	cout << "Среднее арифметических чисел: " << (float)sum / (ROWS * COLS) << endl;
	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	cout << "Минимальное значение арифметических чисел: " << min << endl;
	cout << "Максимальное значение арифметических чисел: " << max << endl;
}