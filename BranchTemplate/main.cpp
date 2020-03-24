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
	cout << "����� ��������� �������: " << sum(arr, n) << endl;
	cout << endl;
	cout << "������� �������������� ��������� �������: " << avg(arr, n) << endl;
	cout << endl;
	cout << "����������� �������� � �������: " << MinValueIn(arr, n) << endl;
	cout << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(arr, n) << endl;
	cout << endl;
	cout << "\t\t\t\t\"������ double\"" << endl;
	cout << endl;

	const int m = 8;
	double brr[m];
	fillrand(brr, m);
	print(brr, m);
	sort(brr, m);
	print(brr, m);
	cout << endl;

	cout << "����� ��������� ������� \"double\": " << sum(brr, m) << endl;
	cout << endl;
	cout << "������� �������������� ��������� ������� \"double\": " << avg(brr, m) << endl;
	cout << endl;
	cout << "����������� �������� � ������� \"double\": " << MinValueIn(brr, m) << endl;
	cout << endl;
	cout << "������������ �������� � ������� \"double\": " << MaxValueIn(brr, m) << endl;
	cout << endl;
	cout << "\t\t\t\t\"��������� ������ int\"" << endl;
	cout << endl;

	int A[ROWS][COLS];
	fillrand(A, ROWS, COLS);
	print(A, ROWS, COLS);
	sort(A, ROWS, COLS);
	print(A, ROWS, COLS);
	cout << "����� ��������� ���������� �������: " << sum(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "������� �������������� ��������� ��e������� �������: " << avg(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "����������� �������� � ��������� �������: " << MinValueIn(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "������������ �������� � ��������� �������: " << MaxValueIn(A, ROWS, COLS) << endl;
	cout << endl;
	cout << "\t\t\t\t\"��������� ������ double\"" << endl;
	cout << endl;

	double B[ROWS][COLS];
	fillrand(B, ROWS, COLS);
	print(B, ROWS, COLS);
	sort(B, ROWS, COLS);
	print(B, ROWS, COLS);
	cout << endl;
	cout << "����� ��������� ���������� ������� \"double\": " << sum(B, ROWS, COLS) << endl;
	cout << endl;
	cout << "������� �������������� ��������� ��e������� ������� \"double\": " << avg(B, ROWS, COLS) << endl;
	cout << endl;
	cout << "����������� �������� � ��������� ������� \"double\": " << MinValueIn(B, ROWS, COLS) << endl;
	cout << endl;
	cout << "������������ �������� � ��������� ������� \"double\": " << MaxValueIn(B, ROWS, COLS) << endl;
	cout << endl;

}
