#include <iostream>
using namespace std;

const int ROWS = 10;  // Ряд
const int COLS = 10; // Столб (элементы строки)

template<typename T>void fillrand(T arr[], const int n);
template<typename T>void fillrand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void print(T arr[], const int n);
template<typename T>void print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void sort(T arr[], const int n);
template<typename T>void sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T sum(T arr[], const int n);
template<typename T>T sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double avg(T arr[], const int n);
template<typename T>double avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MinValueIn(T arr[], const int n);
template<typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MaxValueIn(T arr[], const int n);
template<typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

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

template<typename T>void fillrand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
template<typename T>void fillrand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}
template<typename T>void print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void print(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
template<typename T>void sort(T arr[], const int n)
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
template<typename T>void sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
						T buffer = arr[i][j];
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
template<typename T>T sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>double avg(T arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
template<typename T>double avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template<typename T>T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
template<typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
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
template<typename T>T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
template<typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
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
