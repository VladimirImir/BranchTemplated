#include "functions.h"

template<typename T>double avg(T arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
template<typename T>double avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}