#pragma once
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
