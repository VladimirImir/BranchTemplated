#include <iostream>
using namespace std;

const int ROWS = 10;  // Ряд
const int COLS = 10; // Столб (элементы строки)


void fillrand(int arr[], const int n);
void fillrand(double arr[], const int n);
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS);


void print(int arr[], const int n);
void print(double arr[], const int n);
void print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void print(double arr[ROWS][COLS], const int ROWS, const int COLS);


void sort(int arr[], const int n);
void sort(double arr[], const int n);
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(double arr[ROWS][COLS], const int ROWS, const int COLS);


int sum(int arr[], const int n);
double sum(double arr[], const int n);
int sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(double arr[ROWS][COLS], const int ROWS, const int COLS);


double avg(int arr[], const int n);
double avg(double arr[], const int n);
double avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(double arr[ROWS][COLS], const int ROWS, const int COLS);


int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);


int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	fillrand(arr, n);
	print(arr, n);
	sort(arr, n);
	print(arr, n);
	cout << endl;
	cout << "Сумма элементов массива: " << sum(arr, n) << endl;
	cout << endl;
	cout << "Среднее арифметическое элементов массива: " << avg(arr, n) << endl;
	cout << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	cout << endl;
	cout << "\t\t\t\t\"Массив double\"" << endl;
	cout << endl;

	const int m = 8;
	double brr[m];
	fillrand(brr, m);
	print(brr, m);
	sort(brr, m);
	print(brr, m);
	cout << endl;

	cout << "Сумма элементов массива \"double\": " << sum(brr, m) << endl;
	cout << endl;
	cout << "Среднее арифметическое элементов массива \"double\": " << avg(brr, m) << endl;
	cout << endl;
	cout << "Минимальное значение в массиве \"double\": " << MinValueIn(brr, m) << endl;
	cout << endl;
	cout << "Максимальное значение в массиве \"double\": " << MaxValueIn(brr, m) << endl;
	cout << endl;
	cout << "\t\t\t\t\"Двумерный массив int\"" << endl;
	cout << endl;

	int A[ROWS][COLS];
	fillrand(A, ROWS, COLS);
	print(A, ROWS, COLS);
	sort(A, ROWS, COLS);
	print(A, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << sum(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "Среднее арифметическое элементов двeмерного массива: " << avg(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "Минимальное значение в двумерном массиве: " << MinValueIn(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "\t\t\t\t\"Двумерный массив double\"" << endl;
	cout << endl;

	double B[ROWS][COLS];
	fillrand(B, ROWS, COLS);
	print(B, ROWS, COLS);
	sort(B, ROWS, COLS);
	print(B, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов двумерного массива \"double\": " << sum(B, ROWS, COLS) << endl;
	cout << endl;
	cout << "Среднее арифметическое элементов двeмерного массива \"double\": " << avg(B, ROWS, COLS) << endl;
	cout << endl;
	cout << "Минимальное значение в двумерном массиве \"double\": " << MinValueIn(B, ROWS, COLS) << endl;
	cout << endl;
	cout << "Максимальное значение в двумерном массиве \"double\": " << MaxValueIn(B, ROWS, COLS) << endl;
	cout << endl;



}

void fillrand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 10;
	}
}
void fillrand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
		//arr[i] /= 10;
	}
}
void fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 100) / 10;
		}
	}
}

void print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}
void sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	cout << endl;
}
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)

		{
			for (int k = i; k < ROWS; k++)
			{
				/*int l;
				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}*/

				// conditions ? (value)1 : (value)2;

				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
	cout << endl;
}
void sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
	cout << endl;
}
int sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double avg(int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(double arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}

	}
	return min;
}
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}

	}
	return min;
}
int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}

	}
	return max;
}
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}

	}
	return max;
}


