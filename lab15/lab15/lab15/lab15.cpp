#include <iostream>
#include <stdio.h>	
#include <stdlib.h>

void main()
{
	setlocale(LC_CTYPE, "russian");
	using namespace std;
	int n; float el, proizv = 1, sum = 0, min;
	float* A;
	cout << "Введите размер массива" << endl;
	cin >> n;
	A = (float*)calloc(n, sizeof(float));//выделение памяти для динамического массива
	for (int i = 0; i < n; i++) {//заполнение массива с клавиатуры
		cout << "Введите элемент " << endl;
		cin >> el;
		A[i] = el;
		if (i == 0) {
			min = A[0];
		}
		if (A[i] < min)
			min = A[i];
		if (el > 0) {
			proizv = proizv * el;
		}
	}
	cout << "Размер массива (байты) " << (int)_msize(A) << endl;//проверка выделеной памяти
	for (int i = 0; i < n; i++) {
		cout << A[i] << " " << endl;
	}
	//находим произведение
	cout << "Произведение= " << proizv << endl;
	for (int i = 0; i < n; i++) {
		if (A[i] != min) {
			sum = sum + A[i];
		}
		else
			break;
	}
	//находим сумму
	cout << "Сумма= " << sum << endl;
	free(A);
	
}
