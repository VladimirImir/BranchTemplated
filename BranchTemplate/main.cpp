#include "functions.h"
#include "fillrand.cpp"
#include "print.cpp"
#include "sort.cpp"
#include "sum.cpp"
#include "avg.cpp"
#include "MinValueIn.cpp"
#include "MaxValueIn.cpp"

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
